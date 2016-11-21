#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
  char operato;
  float number1,number2;
  cin>>operato;
  cin>>number1>>number2;
  switch(operato)
  {
      case '+':
      cout<<number1<<"+"<<number2<<"="<<number1+number2;
      break;
      case '-':
      cout<<number1<<"-"<<number2<<"="<<number1-number2;
      break;
      case '*':
      cout<<number1<<"*"<<number2<<"="<<number1*number2;
      break;
      case '/':
      cout<<number1<<"/"<<number2<<"="<<number1/number2;
      break;
      default:
      cout<<"there is an error!!!please retry "<<endl;
  }

  return 0;
}




