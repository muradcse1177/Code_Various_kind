#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
  int i,j, p_factor,status=0;
  cin>>p_factor;
  for(i=1;i<=p_factor;i++)
  {
      if(p_factor%i==0)
      {
          if(i==1)
          {
             break;
          }

           cout<<i<<" "<<endl;

      }
  }
  return 0;
}





