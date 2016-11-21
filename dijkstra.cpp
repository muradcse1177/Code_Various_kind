#include<iostream>
#include<cstdio>
#include<cmath>
#include<sstream>
#include<ctime>
#include<cstring>
#include<cstdlib>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#include<map>
#include<set>
#define mp make_pair
#define pb push_back
#define max(a,b)a>b?a:b
#define min(a,b)a<b?a:b
#define MAX 20000+20
#define INF 1<<30
using namespace std;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
struct node{
    int name,cost;
    node(int a,int b)
    {
        name=a;
        cost=b;
    }
    bool operator < ( const node& p ) const 
    {
        return cost > p.cost;
    }
};
priority_queue<node> pq;
vi relation[MAX+1],costing[MAX+1];
int nowDist[MAX+1],parent[MAX+1],target;

int initialize(int total)
{
    for(int i=0;i<=total;i++)
        nowDist[i]=INF;
    memset(parent,-1,sizeof parent);
    while(!pq.empty())
        pq.pop();
    for(int i=0;i<=total;i++)
    {
        relation[i].clear();
        costing[i].clear();
    }
}

int dijkstra(int source,int total)
{

    
    nowDist[source]=0;
    pq.push(node(source,0));
    while(!pq.empty())
    {
        int name,cost;
        node temp=pq.top();
        pq.pop();
        name=temp.name;
        cost=temp.cost;
        if(name==target)
            return nowDist[target];
        
        for(int i=0;i<relation[name].size();i++)
        {
            int u=relation[name][i];
            if(nowDist[u]>nowDist[name]+costing[name][i])
            {
                nowDist[u]=nowDist[name]+costing[name][i];
                parent[u]=name;
                pq.push(node(u,nowDist[u]));
            }
        }
    }
    return -1;
    
}

int main ()
{
    //freopen("out.txt","w",stdout);
    //freopen("in.txt","r",stdin);
    int testCase,x,y,n,m,source,z;
    cin>>testCase;
    for(int qq=1;qq<=testCase;qq++)
    {
        cin>>n>>m>>source>>target;
        initialize(n);
        for(int i=1;i<=m;i++)
        {
            cin>>x>>y>>z;
            relation[x].pb(y);
            relation[y].pb(x);
            costing[x].pb(z);
            costing[y].pb(z);
            
        }
        int result=dijkstra(source,n);
        printf("Case #%d: ", qq);
        if(result==-1)
            cout<<"unreachable"<<endl;
        else
            cout<<result<<endl;
    }

    return 0;
}




