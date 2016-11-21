#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
  int number,mul=1,power;
  cin>>number>>power;
  while(power!=0)
  {
      mul=mul*number;
      power--;
  }
  cout<<mul;
  return 0;
}




