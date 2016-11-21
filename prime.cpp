#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int interval(int first_int,int second_int)
{

  int i,status;

  while(first_int < second_int)
  {
  status=0;
  for(i=2;i<=first_int/2;i++)
  {

      if(first_int%i== 0)
      {
         status=1;
       break;
      }
  }

  if(status==0)
  {
      cout<<first_int<<" ";

  }
  first_int++;
  }
}

int prime(int number)
{
  int i,status=0;
  if(number==2)
  {
      cout<<"Its a prime number"<<endl;
  }
  else
  {

  for(i=2;i<=number/2;i++)
  {
      if(number%i==0)
      {
         status=1;
         break;
      }
  }
  if(status==0)
  {
      cout<<" prime"<<endl;
  }
  else
  cout<<" not prime"<<endl;
  }
}


int main()
{
  int number;
  cin>>number;
  prime(number);
  int first_int, second_int;
  cin>>first_int>>second_int;
  interval(first_int,second_int);
  return 0;
}





