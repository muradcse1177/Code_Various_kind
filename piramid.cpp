#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

int piramid(int row)
{
    int i, j;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
             cout<<"*";
        }
        cout<<"\n";
    }
}

int piramid1(int row)
{
    int i, j;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
             cout<<i;
        }
        cout<<"\n";
    }
}

int piramid2(int row)
{
    int i, j;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
             cout<<j;
        }
        cout<<"\n";
    }
}
int piramid3()
{
    int i, j;
    char input, alphabet = 'A';

    printf("Enter the uppercase character you want to print in last row: ");
    scanf("%c",&input);

    for(i=1; i <= (input-'A'+1); ++i)
    {
        for(j=1;j<=i;++j)
        {
            printf("%c", alphabet);
        }
        ++alphabet;

        printf("\n");
    }
}

int piramid4(int row)
{
   int i, j;
    for(i=1;i<=row;i++)
    {
        for(j=row;i<=j;j--)
        {
             cout<<"*";
        }
        cout<<"\n";
    }
}

int piramid5(int row)
{
    int i, j;
    for(i=row;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
             cout<<j;
        }
        row--;
        cout<<"\n";
    }
}

int main ()
{
    int i, j, row;
    cin>>row;
    piramid(row);
    piramid1(row);
    piramid2(row);
   // piramid3();
    piramid4(row);
    piramid5(row);
  return 0;
}





