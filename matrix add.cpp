
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int matrix1[100][100],matrix2[100][100],sum[100][100];
    int i,j,row,colu;
    cout<<"number of row:";
    cin>>row;
    cout<<endl;
    cout<<"number of column:";
    cin>>colu;

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=colu;j++)
        {
            cout<<"Enter value for 1st matrix"<<i<<j<<":";
            cin>> matrix1[i][j];

        }
    }
    cout<<endl;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=colu;j++)
        {
            cout<<"Enter value for 2nd matrix"<<i<<j<<":";
            cin>> matrix2[i][j];

        }
    }

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=colu;j++)
        {
            sum[i][j]=matrix1[i][j]+matrix2[i][j];
        }

    }

    cout<<"the sum of the two matrix:"<<endl;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=colu;j++)
        {

            cout<<sum[i][j]<<"  ";

            if(colu==j)
            {
                cout<<endl;
            }
        }
    }
    return 0;
}
