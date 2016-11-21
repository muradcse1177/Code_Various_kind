#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,num,key1,key2,key3,i,j;
    int radiax[200];
    int A[11],B[11],C[11],tem[11];
    cout<<"number:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>radiax[i];
    }
    for(int i=1;i<=n;i++)
    {
        num=radiax[i];
        C[i]=num%10;
        num=num/10;

        B[i]=num%10;
        num=num/10;

        A[i]=num%10;

        //cout<<A[i]<<B[i]<<C[i]<<endl;;
    }
    cout<<"for C:\n";
    for(i=1;i<=n;i++)
    tem[i]=C[i];

    for(j=2;j<=n;j++)
    {
        key1=C[j];
        key2=B[j];
        key3=A[j];
        i=j-1;
        while((i>0)&&(C[i]>key1))
        {
            C[i+1]=C[i];
            B[i+1]=B[i];
            A[i+1]=A[i];

            i--;
        }
        C[i+1]=key1;
        B[i+1]=key2;
        A[i+1]=key3;
        //cout<<"i="<<i<<" j="<<j<<"  C="<<C[i+1]<<endl;
    }
            for(int x=1;x<=n;x++)
        printf("\n%d  %d  %d \n",A[x],B[x],C[x]);
          int ii=1;
            for(j=1;j<=n;j++)
            {
                if(C[ii]==tem[j])
                {
                    cout<<j<<" ";

                }
                if(ii<=n)
                break;
            }

        }
        cout<<"for B:\n";
        for(j=2;j<=n;j++)
       {
        key1=C[j];
        key2=B[j];
        key3=A[j];
        i=j-1;
        while((i>0)&&(B[i]>key2))
        {
            C[i+1]=C[i];
            B[i+1]=B[i];
            A[i+1]=A[i];

            i--;
        }
        C[i+1]=key1;
        B[i+1]=key2;
        A[i+1]=key3;
        cout<<"i="<<i+1<<" j="<<j<<endl;
    }
            for(int x=1;x<=n;x++)
        printf("\n%d  %d  %d \n",A[x],B[x],C[x]);

    cout<<"for A:\n";
    for(j=2;j<=n;j++)
    {
        key1=C[j];
        key2=B[j];
        key3=A[j];
        i=j-1;
        while((i>0)&&(A[i]>key3))
        {
            C[i+1]=C[i];
            B[i+1]=B[i];
            A[i+1]=A[i];

            i--;
        }
        C[i+1]=key1;
        B[i+1]=key2;
        A[i+1]=key3;
        cout<<"i="<<i+1<<" j="<<j<<endl;
    }
            for(int x=1;x<=n;x++)
        printf("\n%d  %d  %d \n",A[x],B[x],C[x]);

}
