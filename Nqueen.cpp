#include<bits/stdc++.h>

using namespace std;
int x[8];

bool isplace(int k , int i)
{
    for(int j = 1 ; j< k ; j++ )
    {
        if(x[j]==i)
            return false;
        if(abs(x[j]-i)==abs(j-k))
            return false ;
    }
    return true;
}

int nqueen(int k , int n)
{
    for(int i = 1; i<= n ;i++ )
    {
        if(isplace(k, i ))
        {
            x[k] = i;
            if(k==n)
            {
                for(int i = 1 ; i<= n; i++ )
                    cout<<x[i]<<ends;
                cout<<endl;
            }
            else
                nqueen(k+1 , n);

        }
    }
}

int main()
{

    nqueen(1,4);

}
