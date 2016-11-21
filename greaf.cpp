#include<iostream>
#include<vector>
#include<cstdio>
#define MAX 10000
using namespace std;
vector<int>edge[MAX];
void bsf(int n,int source)
{
    vector<int>v1,v2;
    v1.push_back(source);
    int taken[100]={0};
    for(int loop=1;loop<n;loop++)
    {
        printf("loop %d:",loop);
        for(int i=0;i<v1.size();i++)
        {
            int u=v1[i];
            for(int j=0;j<edge[u].size();j++)
            {
                int v=edge[u][j];
                if(!taken[v])
                {
                    printf("%d ",v);
                    taken[v]=1;
                    v2.push_back(v);
                }
            }
        }
        if(v2.empty())
        {
            puts("EMPTY\n");
            break;
        }
        else
        {
            v1.clear();
            v1=v2;
            v2.clear();
        }
        printf("\n");
    }
}
int main()
{
   // vector<int>cost[MAX];
    int x,y,E,N,c,s;
    scanf("%d %d",&N,&E);
    for(int i=0;i<E;i++)
    {
        scanf("%d %d",&x,&y);
        edge[x].push_back(y);
        edge[y].push_back(x);
    }
    printf("Source:");
    scanf("%d",&s);
    bsf(N,s);
    return 0;
}
