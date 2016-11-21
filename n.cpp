#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string ch[900];
    for(int j=0;scanf("%s",&ch[j])!=EOF;j++)
    cin>>ch[j];
    for(int i=0;i<2;i++)
    cout<<ch[i]<<" ";

return 0;

    }

