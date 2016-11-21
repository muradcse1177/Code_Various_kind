#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
  int n, number,reverse_num=0,reminder;
  cin>>number;
  n=number;
  while(n!=0)
  {
      reminder=n%10;
      reverse_num=reverse_num*10+reminder;
      n=n/10;
  }
  cout<<reverse_num<<" ::";
  if(number==reverse_num)
  {
      cout<<"pallindrome"<<endl;
  }
  else
  cout<<"Not Pallindrome";
  return 0;
}



