#include<iostream>
#include<stdio.h>
#include<cctype>
using namespace std;
int main()
{
    int sort[]={14,24,56,7,89,11,47};
    int first,last=6,a,b,c,p=0;
    first=sort[0];
    for(int h=0;h<6;h++)
    {

    for(int i=last;i>p;i--)
    {
        if(first>sort[i])
        {
            a=sort[i];
            sort[i]=first;
            sort[p]=a;
            c=i;
            break;
        }
    }
    cout<<first<<" change:"<<a<<endl;
    for(int s=0;s<=6;s++)
    cout<<sort[s]<<" ";
    cout<<endl;

    for(int j=p;j<c;j++)
    {
        if(first<sort[j])
        {
            a=sort[j];
            sort[j]=first;
            sort[c]=a;
             p=j;
            break;
        }
    }
    cout<<first<<" 2change:"<<a<<endl;
    for(int s=0;s<=6;s++)
    cout<<sort[s]<<" ";
    cout<<endl;
    cout<<"                sort:"<<sort[c-1]<<"   "<<sort[p]<<endl;
    cout<<"p:"<<p<<" c:"<<c<<endl;
    if(sort[c-1]==sort[p])
    {
        first=sort[p+1];
        p++;
        continue;
    }
    }

    return 0;

}
