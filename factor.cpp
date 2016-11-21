
#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
  int i, factor,status;
  cin>>factor;
  for(i=1;i<=factor;i++)
  {
      status=0;
      if(factor%i==0)
      {
          cout<<i<<" ";
      }
  }
  return 0;
}




