#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int decimaltobinary()
{
    int number,i=1,reminder,binaryNumber=0;
    cin>>number;
    while(number!=0)
    {
        reminder=number%2;
        number=number/2;
        binaryNumber =binaryNumber+ reminder*i;
        i = i*10;
    }
    cout<<binaryNumber;
}

int binarytodecimal()
{

}


int main()
{
    decimaltobinary();
    binarytodecimal();
    return 0;
}





