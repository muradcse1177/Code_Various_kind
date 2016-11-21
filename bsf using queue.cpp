#include<iostream>
#include<vector>
#include<queue>
#include<cstdio>
#define MAX 10000
using namespace std;
vector<int>edge[MAX];
vector<int>cost[MAX];
void bsf(int n,int source)
{
    queue<int>Q;
    queue<int>st;
    int taken[100]={0},curr=0,m=0;
    taken[1]=1;
    int min[100]={0};
    min[source]=0;
    Q.push(source);
    while(!Q.empty())
    {
        int u=Q.front();
        for(int i=0;i<edge[u].size();i++)
        {
            int v=edge[u][i];
            if(!taken[v])
            {
                Q.push(v);
                st.push(v);
                taken[v]=1;
                min[v]=cost[u][i]+curr;
            }
        }
       int z=st.front();
       int h=Q.front();
       cout<<h<<" ";
        curr=min[z];
        Q.pop();
        st.pop();
    }
    min[source]=0;
    for(int i=1;i<=n;i++)
    {
        printf("%d to %d cost:%d\n",source,i,min[i]);
    }
}
int main()
{
    int x,y,E,N,c,s;
    scanf("%d %d",&N,&E);
    for(int i=0;i<E;i++)
    {
        scanf("%d %d %d",&x,&y,&c);
        edge[x].push_back(y);
        edge[y].push_back(x);
        cost[x].push_back(c);
        cost[y].push_back(c);
    }
    printf("Source:");
    scanf("%d",&s);
    bsf(N,s);
    return 0;
}
