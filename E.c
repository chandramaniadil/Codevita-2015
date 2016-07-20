#include <stdio.h>
#define PI (3.141592653589793)
int main()
{
    double X,Y,Z,M;
    double x,y,z,temp,s,unused_area;
    scanf("%lf %lf %lf %lf",&X,&Y,&M,&z);
    temp = cos((z*PI)/180)/((Y/X)+sin(z));
    x = atan2(temp);
    y = 180-x-z;
    Z = (Y*sin((z*PI)/180))/sin((y*PI)/180);
    s = (X+Y+Z)/2;
    temp = sqrt(s*(s-X)*(s-Y)*(s-Z));
    s = 0.5*M*M*z;
    unused_area = temp-s;
    
            printf("%lf %lf %lf\n",X,Y,Z);
    printf("%.5lf\n",unused_area);
    printf("%.5lf",Z);
   
    return 0;
}    
