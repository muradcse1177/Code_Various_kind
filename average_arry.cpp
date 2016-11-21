#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
  float arry[100],number,sum=0,n;
  cout<<"input the number of summation number:";
  cin>>number;
  cout<<endl;
  int i;
  for(i=1;i<=number;i++)
  {
      cin>>arry[i];
      sum=sum+arry[i];
  }
  cout<<"average:"<<sum/number;
  return 0;
}




