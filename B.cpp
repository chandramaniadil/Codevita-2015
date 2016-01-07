#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    float P,R;
    int T;
    cin>>P>>R>>T;

    long FA;
    FA=pow((P*(1+R/12)),(T));
   cout<<"Final_Amount "<<FA;
    return 0;
}
