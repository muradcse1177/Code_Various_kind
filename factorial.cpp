
#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
int i,factorial, number, fact=1;
cin>>number;

if(number==0)
{
    cout<<"factorial==1"<<endl;
}
else
{
    for(i=1;i<=number;i++)
    {
        fact=fact*i;

    }
cout<<"factorial:"<<fact;
}

    return 0;

}
