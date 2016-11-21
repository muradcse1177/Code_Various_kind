#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int array[100][100];
    int i,j;
    for(i=1;i=2;i++)
    {
        for(j=1;j<=3;j++)
        {
            cout<<"Enter value for dis"<<i<<j<<":";
            cin>> array[i][j];
           cout<<array[i][j];
        }

    }
    return 0;
}
