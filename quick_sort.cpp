#include<iostream>
#include<cstdio>
using namespace std;
int a[90],n;

int partition(int p,int r)
{
    int x=a[r];
    int i=p-1;
    for(int j=p;j<=r-1;j++)
    {
        if(a[j]<=x)
        {
            i++;
            int tem=a[i];
            a[i]=a[j];
            a[j]=tem;
        }

        cout<<"result:";
        for(int j=0;j<n;j++)
        cout<<a[j]<<" ";
        cout<<endl;
    }
    int tem2=a[i+1];
    a[i+1]=a[r];
    a[r]=tem2;

        cout<<"result:";
        for(int j=0;j<n;j++)
        cout<<a[j]<<" ";
        cout<<" i+1="<<(i+1)<<endl;

    return i+1;
}

void quick_sort(int p,int r)
{
    if(p<r)
    {
        int q=partition(p,r);
        //cout<<"new:\n";
        quick_sort(p,q-1);
        //cout<<"2nd new:\n";
        quick_sort(q+1,r);
    }
    else
    return;
}

int main()
{
    cout<<"number:";
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    quick_sort(0,n-1);

    cout<<"result:";
    for(int j=0;j<n;j++)
    {
        cout<<a[j]<<" ";
    }
    cout<<endl;
}
