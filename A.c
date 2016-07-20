#include <stdio.h>
int main()
{
    int f,b,t,fd,bd,testcases;
    int fall,devil,total_time=0;
    scanf("%d",&testcases);
    while(testcases-->0)
    {
        scanf("%d %d %d %d %d",&f,&b,&t,&fd,&bd);
        if(f==b)
        {
            if(bd>b&&f<(fd+bd))
            {
                printf("Thank God\n");
                continue;
            } 
            else if(bd<=b)   
            {
                total_time = t*bd;
                printf("%d B\n",total_time);
                continue;
            }
            else    
            {
                total_time = t*fd;
                printf("%d F\n",total_time);
                continue;
            }            
        }
        else
        {
            total_time=0;
            fall=1;
            devil=1;
            while(fall&&devil)
            {
                if(bd>b && f<(b+fd))
                {
                    bd = bd-b+f;
                    fd = fd+b-f;
                    total_time += t*(f+b);
                }
                else if(bd<=b)    
                {
                    total_time += t*(bd);
                    devil=0;
                }
                else
                {
                    bd = bd-b;
                    fd = fd+b;
                    total_time += t*(b+fd);
                    fall=0;
                }        
            } 
            if(fall)
                        printf("%d B\n",total_time);
            else
                        printf("%d F\n",total_time);
        }    
    }               
    return 0;
}    
