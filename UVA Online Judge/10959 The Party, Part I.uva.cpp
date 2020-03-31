#include <bits/stdc++.h>
#define pb push_back
using namespace std;
vector <int> node[1000];
int  dis[100000];
void bfs (int src)
{
    dis[src] = 0;
    queue <int> q;
    q.push(src);
    while(!q.empty())
    {
        int u = q.front();
         q.pop();
        for(int i = 0; i < node[u].size(); i++)
        {
            int v = node[u][i];
            if(dis[v] == -1)
            {
                dis[v] = dis[u] + 1;
                q.push(v);
            }
        }
    }
}
int main()
{
    int test;
    while(scanf("%d",&test)==1)
    {
        for(int i=1;i<=test;i++)
        {
   int n , e;

   cin >> n >> e;
   memset(dis, -1, sizeof dis);
   for(int i = 1; i <= e; i++)
   {
       int a, b;
       cin >> a >> b;
       node[a].pb(b);
       node[b].pb(a);
   }
   bfs(0);
   for(int i =1; i<n; i++)
   {
    printf("%d\n",dis[i]);

   }

     for(int i=0;i<n;i++)
     {
     node[i].clear();
         }
         if(i!=test)
         {
             printf("\n");

         }
        }
    }

return 0;
    }
