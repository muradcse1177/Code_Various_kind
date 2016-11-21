#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

int main ()
{
    int test,i;
    for(int test=2;test<100;test++)
    {
        for(int i=2;i<=test;i++)
        {
            while (test%i==0)
            {
                test /= i;
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }

  return 0;
}




