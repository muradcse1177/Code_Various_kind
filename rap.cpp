#include<iostream>
#include<cstring>
using namespace std;

void countingsort(char s[][20],int a[],char b[][20],int n,int k)
{   int c[100];
    int l,j,i;
    for( l=0;l<=k;l++)
        c[l]=0;
    for(j=0;j<n;j++)
        c[a[j]]=c[a[j]]+1;
    for(i=1;i<=k;i++)
        c[i]=c[i]+c[i-1];
    for(j=n-1;j>=0;j--)
    {
        strcpy(b[c[a[j]]-1],s[j]);
        c[a[j]]=c[a[j]]-1;
    }
    for(i=0;i<n;i++)
    {
        strcpy(s[i],b[i]);
    }
}

void radixsort(char s[][20],int d,int n)
{  int z[20];
    char b[20][20];
    int i,j,k;
    j=d-1;
    for(i=1;i<=d;i++)
    {
        for(k=0;k<n;k++)
        {
            z[k]=s[k][j]-48;
        }
        --j;

        countingsort(s,z,b,n,9);
    }
    cout<<"Output"<<endl;
    for(i=0;i<n;i++)
        cout<<b[i]<<endl;
}


int main()
{
    int n,i,d;
    char a[20][20];
    cout<<"Entr the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the no. of digits"<<endl;
    cin>>d;
    cout<<"Enter its element"<<endl;
    for(i=0;i<n;i++)
        cin>>a[i];
    radixsort(a,d,n);
    return 0;
}
