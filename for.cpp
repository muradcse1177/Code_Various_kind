#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
int number;
cin>>number;
int i,sum=0;
for(i=1;i<=number;i++)
{
   sum= sum+i;
   cout<< sum<< endl;
}
cout<<"sum"<< sum;
    return 0;

}
