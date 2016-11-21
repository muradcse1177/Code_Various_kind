#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a[400];
    int j,key,i,n;
    scanf("%d",&n);
    for(int p=1;p<=n;p++)
    {
        scanf("%d",&a[p]);
    }
    cout<<endl;
    for(j=2;j<=n;j++)
    {
        key=a[j];
        i=j-1;
        while((i>0)&&(a[i]>key))
        {
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=key;

        for(int x=1;x<=n;x++)
        printf("%d ",a[x]);
        cout<<"i="<<i+1<<" j="<<j<<endl;
    }


    return 0;
}
