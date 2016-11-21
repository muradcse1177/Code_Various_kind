#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
  long long n;
  int i,count=0;
  cin>>n;

  while(n!=0)
  {
      n=n/10;
      count++;
  }
  cout<<count;
  return 0;
}



