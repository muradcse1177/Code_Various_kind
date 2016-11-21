#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;
int prime(int n)
{
    int i, j,k, status1,status2, minus;

    cout<<"All prime numbers between 1 to n:"<<endl;

    for(i=2; i<=n/2; i++)
    {
        status1 = 1;
        status2=1;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                status1 = 0;
                break;
            }
        }
        if(status1==1)
        {
            //cout<<i<<" ";
            minus=n-i;
            for(k=2;k<=minus/2;k++)
            {
                if(minus%k==0)
                {
                    status2=0;
                    break;
                }
            }

            if(status2==1)
            {

                cout<<i<<"+"<<minus<<"="<<i+minus<<endl;
            }
        }
    }
}

int main()
{
    int n;
    cout<<"Find prime numbers between 1 to n : ";
    cin>>n;
    prime(n);
    return 0;
}





