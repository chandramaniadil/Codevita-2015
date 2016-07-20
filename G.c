#include <stdio.h>
#include <math.h>
#define PI (3.141592653589793)
#define deg2rad(DEG) ((DEG)*((PI)/(180.0)))    
void rotateXY(int *theX,int *theY,int rotationTheta,int rotationOriginX,int rotationOriginY)
 {

  int newX,newY;

  if (rotationOriginX == 0 && rotationOriginY == 0) {
    newX = (*theX) * cos(deg2rad(rotationTheta)) - sin(deg2rad(rotationTheta)) * (*theY);
    newY = (*theX) * sin(deg2rad(rotationTheta)) + cos(deg2rad(rotationTheta)) * (*theY);
  }
  else {
    newX = ((*theX) - rotationOriginX) * cos(deg2rad(rotationTheta)) - ((*theY) - rotationOriginY) * sin(rotationTheta) + rotationOriginX;
    newY = ((*theX) - rotationOriginX) * sin(deg2rad(rotationTheta)) + ((*theY) - rotationOriginY) * cos(rotationTheta) + rotationOriginY;
  }
  *theX=newX;
  *theY=newY;
}
void scaleXY(int *theX,int *theY,int scaleFactor) {

  int newX = *theX * scaleFactor;
  int newY = *theY * scaleFactor;
  *theX = newX;
  *theY = newY;
}
int main()
{
    int n,x[10],y[10],a,s,rotx,roty,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&x[i],&y[i]);
    }
    scanf("%d",&a);    
    scanf("%d",&s);
    scanf("%d %d",&rotx,&roty);
    for(i=0;i<n;i++)
    {
        rotateXY(&x[i],&y[i],a,rotx,roty);
        scaleXY(&x[i],&y[i],s);
    }

    for(i=0;i<n;i++)
    {
        printf("%d %d\n",x[i],y[i]);
    }  
     
    return 0;
}    
