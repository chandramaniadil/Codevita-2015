#include <stdio.h>
int main()
{
    FILE *fp;
    char filename[80],line1[25],line2[25];
    int fc,i,j;
    scanf("%s",filename);
    fp = fopen(filename,"r");
    while(!feof(fp))
    {
        fc=0;
        j=0;
        i=0;
        fscanf(fp,"%s%s",line1,line2);
        while(line1[i]!='\0')
        {
            if(line1[i]!='F'&&line2[j]!='F')    
            {    
                        printf("%c%c",line1[i],line2[j]);
                i++;j++;
            }
            else if(line2[j]=='F')
            {
                printf("%c|",line1[i]);
                i++;j++;
            }    
            else if(line1[i]=='F')
            {
                if(line2[j]=='\0')
                printf("\n");
                else
                printf("|%c",line2[j]);
                i++;j++;    
            }            
        }            
    } 
    return 0;       
}    
