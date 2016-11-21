#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int matrix1[100][100],matrix2[100][100],mul[100][100];
    int i,j,k,row1,colu1,row2,colu2;
    cout<<"number of row and column for first:";
    cin>>row1>>colu1;
    cout<<endl;
    cout<<"number of row and column for second:";
    cin>>row2>>colu2;

    while (colu1!=row2)
    {
        cout<<"Error! column of first matrix not equal to row of second"<<endl;
        cout<<"Enter rows and column for first matrix: ";
        cin>> row1>>colu1;
        cout<<"Enter rows and column for second matrix: ";
        cin>>row2 >>colu2;
    }

    for(i=1;i<=row1;i++)
    {
        for(j=1;j<=colu1;j++)
        {
            cout<<"Enter value for 1st matrix"<<i<<j<<":";
            cin>> matrix1[i][j];

        }
    }
    cout<<endl;
    for(i=1;i<=row2;i++)
    {
        for(j=1;j<=colu2;j++)
        {
            cout<<"Enter value for 2nd matrix"<<i<<j<<":";
            cin>> matrix2[i][j];

        }
    }

    for(i=1; i<=row1; i++)
    {
       for(j=1; j<=colu2; j++)
       {
         mul[i][j]=0;
       }

    }

    for(i=1; i<=row1; i++)
    {
        for(j=1; j<=colu2; j++)
        {
            for(k=1; k<=colu1; k++)
            {
                mul[i][j]=mul[i][j]+ matrix1[i][k]*matrix2[k][j];
            }
        }
    }

    cout<<endl<<"Output Matrix:"<<endl;
    for(i=1; i<=row1; i++)
    for(j=1; j<=colu2; j++)
    {
        cout<<mul[i][j]<<"  ";
        if(j==colu2)
           {

               cout<<endl;
           }
    }


    return 0;
}
