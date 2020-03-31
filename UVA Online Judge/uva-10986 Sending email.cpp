#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int>pp;
vector<pp >node[20002];
 int dis[20002];
using namespace std;

void dijkstra(int src)
 {
     priority_queue<pp,vector<pp>,greater<pp> >pq;
     dis[src]=0;
     pq.push(make_pair(0,src));
     while(!pq.empty())
     {
         pp front=pq.top();
              pq.pop();
        int c=front.first;//cost
        int u=front.second;//node

             if(c>dis[u])
             {
                 continue;
             }
         for(int i=0;i<node[u].size();i++)
         {
            pp v=node[u][i];
            if(dis[u]+v.second<dis[v.first])
            {
                dis[v.first]=dis[u]+v.second;
                pq.push(make_pair(dis[v.first],v.first));
            }



                     }
     }

 }
int main()
{
int n, e,test,s,des;
while(scanf("%d",&test)==1)
{

for(int i=1;i<=test;i++)
{


cin >> n >> e>>s>>des;
    for(int j= 1; j <= e; j++)
    {
        int a, b, cost;
        cin >> a >> b >> cost;
        node[a].push_back(make_pair(b,cost));
            node[b].push_back(make_pair(a,cost));



    }
   for(int x=0;x<n;x++)
         {
            dis[x]=999999999;

         }
     dijkstra(s);
    if(dis[des]==999999999)
    {
        printf("Case #: unreachable\n");
    }
    else{

        printf("Case #: %d\n",dis[des]);
    }
    for(int l=0;l<n;l++)
    {
        node[l].clear();
    }


    }
}
}










/*
 3 4
 1 2 1
 2 3 2
 1 3 6
 3 1 5

 1 2 1 4 4 2 2 7 7 1



*/
