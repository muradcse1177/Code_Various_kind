#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
  long long n;
  int i,count=0,original_num;
  cin>>original_num;

  int reminder,result=0;
  n=original_num;

  while(n!=0)
  {
      n=n/10;
      count++;
  }
  cout<<"number length:"<<count<<endl;
  n=original_num;

  while(n!=0)
  {
      reminder=n%10;
      result=result+pow(reminder,count);
      n=n/10;
  }
  if(original_num==result)
  {
      cout<<"armostrong number"<<endl;
  }
  else
  cout<<"Not armostrong number"<<endl;

  return 0;
}




