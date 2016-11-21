#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<cstdio>
#define MAX 1000
using namespace std;
vector<int>edge[MAX];
void dfs(int s)
{
   queue<int>stk;
   int taken[100]={0};
   taken[1]=1;
   stk.push(s);
   while(!stk.empty())
   {
       //int a=stk.top();
       int a=stk.front();
       for(int i=0;i<edge[a].size();i++)
       {
           int b=edge[a][i];
           if(!taken[b])
           {
               stk.push(b);
              // cout<<"\npush:"<<b<<endl;
               taken[b]=1;
           }
       }
       cout<<"\nsize:"<<stk.size()<<endl;
      // int z=stk.top();
       int z=stk.front();
       cout<<z<<" ";
       stk.pop();
   }

}


int main()
{
    int x,y,E,N,c,s;
    //cout<<"Node:";
    //scanf("%d",&N);
    cout<<"Edge:";
    cin>>E;
    for(int i=0;i<E;i++)
    {
        scanf("%d %d",&x,&y);
        edge[x].push_back(y);
        //edge[y].push_back(x);
    }
    printf("Source:");
    scanf("%d",&s);
    cout<<"Visited area: ";
    dfs(s);
    return 0;
}
