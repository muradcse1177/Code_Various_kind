
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int matrix1[100][100],transpose[100][100];
    int i,j,k,row1,colu1;
    cout<<"number of row and column for the matrix:";
    cin>>row1>>colu1;
    cout<<endl;


    for(i=1;i<=row1;i++)
    {
        for(j=1;j<=colu1;j++)
        {
            cout<<"Enter value for 1st matrix"<<i<<j<<":";
            cin>> matrix1[i][j];

        }
    }
    cout<<endl;

    cout<<endl<<"input Matrix:"<<endl;
    for(i=1; i<=row1; i++)
    for(j=1; j<=colu1; j++)
    {
        cout<<matrix1[i][j]<<"  ";
        if(j==colu1)
           {
               cout<<endl;
           }
    }


    for(i=1; i<=row1; i++)
    {
       for(j=1; j<=colu1; j++)
       {
         transpose[j][i]=matrix1[i][j];
       }

    }


    cout<<endl<<"Transpose Matrix:"<<endl;


    for(i=1; i<=colu1; i++)
    for(j=1; j<=row1; j++)
    {
        cout<<transpose[i][j2]<<"  ";
        if(j==row1)
           {
               cout<<endl;
           }
    }


    return 0;
}
