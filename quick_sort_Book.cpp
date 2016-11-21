#include<iostream>
#include<cctype>
#include<stdio.h>
using namespace std;
int a[200];
int array[900],g=0;
int beg,end,loc,n;


int main()
{
    int top;
    top=0;
    cout<<"Total number of elements:";
    cin>>n;
    cout<<"numbers:";
    for(int i=1;i<=n;i++)
    cin>>a[i];
    if(n>1)
    top=top+1;
    int lower[3],upper[3];
    lower[1]=0;
    upper[1]=n;
    while(top!=0)
    {

        beg=lower[top];
        end=upper[top];
        top--;

        int left=beg;
        int right=end;
        loc=beg;

        while(1)
    {
    //cout<<"now: "<<endl;
    for(int i=1;i<=n;i++)
    {
        //cout<<a[i]<<" ";
        array[g]=a[i];
        g++;
    }
    //cout<<endl;
    while((a[loc]<=a[right])&&(loc!=right))
    {
        right--;
    }
    if(loc==right)
    break;
    if(a[loc]>a[right])
    {
        int temp=a[loc];
        a[loc]=a[right];
        a[right]=temp;
        loc=right;
    }

    //cout<<"nnn:"<<endl;
    for(int i=1;i<=n;i++)
    {
        //cout<<a[i]<<" ";
        array[g]=a[i];
        g++;
    }
    //cout<<endl;

    while((a[left]<=a[loc])&&(left!=loc))
    {
        left++;
    }
    if(loc==left)
    break;
    if(a[left]>a[loc])
    {
        int temp=a[loc];
        a[loc]=a[left];
        a[left]=temp;
        loc=left;
        continue;
    }
    }



       // quick();
        if(beg<loc-1)
        {
            top++;
            lower[top]=beg;
            upper[top]=loc-1;
        }
        if(loc+1<end)
        {
            top++;
            lower[top]=loc+1;
            upper[top]=end;
        }

    }
    cout<<endl;
    for(int i=0;i<g;i++)
    {
        cout<<array[i]<<" ";
        if(i==n-1)
        {
            n=n+n;
            cout<<endl<<endl;
        }

    }

    return 0;
}
