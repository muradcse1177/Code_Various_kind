#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;
int standard_deviation(int number)
{
   float array[100],sum=0,avg,deviation,sumsqr=0,variance,stddeviation ;
   int i,j;
   for(i=1;i<=number;i++)
   {
       cin>>array[i];
       sum=sum+array[i];
   }
   avg=sum/(float)number;

   for (i = 1 ; i<= number; i++)
    {
        deviation = array[i] - avg;
        sumsqr =sumsqr+ deviation * deviation;
    }
    variance = sumsqr/(float)number ;
    stddeviation = sqrt(variance) ;


    cout<<"Number of items :"<<number<<endl;
    cout<<"average:"<<avg<<endl;
    cout<<"Standard deviation :" <<stddeviation;

}

int main()
{
  int number;
  cout<<"please input the given number:";
  cin>>number;
  standard_deviation(number);
  return 0;
}





