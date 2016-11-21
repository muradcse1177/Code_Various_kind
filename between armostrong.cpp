
#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
  long long n;
  int i,count=0,original_num1, original_num2;
  cin>>original_num1>>original_num2;

  int reminder,result=0;
  //n=original_num;

//  while(n!=0)
//  {
//      n=n/10;
//      count++;
//  }
//  cout<<"number length:"<<count<<endl;
//  n=original_num;

  while(original_num1<original_num2)
  {
      reminder=original_num1%10;
      result=result+pow(reminder,3);
      original_num1=original_num1/10;

  if(original_num1==result)
  {
      cout<<"armostrong number"<<original_num1<<endl;
  }
   original_num1++;
  }
  return 0;
}




