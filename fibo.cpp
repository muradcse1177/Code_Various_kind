#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    int i, number, t1=0 ,t2=1, t3;
    cin>>number;
    cout<<t1<<" "<<t2<<" ";
    for(i=3;i<=number;i++)
    {
        t3=t1+t2;
        t1=t2;
        t2=t3;
        cout<<t2<<" ";
    }

    return 0;
}

