#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int matrixC[10][10];
    int l,n;
    cin>>l;
    for(int i=0;i<l;i++)
        {
            for(int j=0;j<l;j++)
            {
                cin>>matrixC[i][j];
            }
        }
    cin>>n;
        for(int i=0;i<l;i++)
        {

            for(int j=0;j<l;j++)
            {
                matrixC[i][j]=pow(matrixC[i][j],n);
            }
        }
        long val=1;
        for(int i=0;i<l;i++)
            for(int j=0;j<l;j++)
            {
                val*=matrixC[i][j];//%1000000007;
            }
    cout<<val;


    return 0;
}
