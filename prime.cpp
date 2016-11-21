#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int prime(long long int n)
{
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    int root,i,p=0;
    root=sqrt(n);
    for(i=2;i<=root;i++)
    {
        if(n%i==0)
        {
            p++;
            break;
        }
    }
    if(p==0)
    return 1;
    else
    return 0;
}
int main()
{
    long long int n,result;
    cin>>n;
    result=prime(n);
    if(result==1)
    cout<<"Prime\n";
    else
    cout<<"Not prime\n";
}
