#include<bits/stdc++.h>

using namespace std;
int arr[100];
bool flag[100] ;
int totalSum ;
int sumofsubset(int sumNow , int place , int remainingArraySum)
{
    flag[place] = 1 ;
    if(sumNow + arr[place]==totalSum)
    {
        for(int i = 0 ; i<=place ; i++ )
            if(flag[i])
                cout<<arr[i]<<ends;
        cout<<endl;
    }
    else if(sumNow + arr[place] + arr[place+1] <=totalSum)
    {
        sumofsubset(sumNow+ arr[place] , place +1 , remainingArraySum - arr[place]);
    }

    if(sumNow + remainingArraySum - arr[place] >= totalSum && sumNow + arr[place+1] <=totalSum )
    {
        flag[place] = 0;
        sumofsubset(sumNow , place +1 , remainingArraySum - arr[place]);
    }

}

int  main()
{
    int n;
    cin>>n ;
    int sum = 0 ;
     for(int i = 0 ; i< n ; i++ )
     {
         cin>>arr[i];
         sum+=arr[i];
     }

     cin>>totalSum;
     sumofsubset(0, 0 , sum);

     return 0;
}
