#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
  float array[100], m[100];
  int number,i;
  cout<<"input the number of array:";
  cin>>number;
  for(i=1;i<=number;i++)
  {
      cin>>array[i];
      cout<<"number are:"<<array[i]<<endl;
  }


  for(i=1;i<=number;i++)
  {
      if(array[0]>array[i])
      {
          array[0]=array[i];
      }
      else
      array[0]=array[i];
  }
  cout<<"largest number is:"<<array[0];
  return 0;
}





