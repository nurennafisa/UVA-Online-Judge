#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int c;
vector <int> node[1000];
int  dis[1000];
bool bfs (int src)
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


             if(dis[u]==dis[v])
                {
                return false;
                }

            }


            }
return true;
}
int main()
{
int n , e,s;

   while(scanf("%d",&n)==1)
   {
       if(n==0)
       {
           break;
       }


   cin>> e;
   memset(dis, -1, sizeof dis);
   for(int i = 0; i < e; i++)
   {
       int a, b;
       cin >> a >> b;
       if(i==0)
       {
           s=a;
       }
       node[a].pb(b);
       node[b].pb(a);
   }

  bool m=bfs(s);
   if(m==false)
   {

  printf("NOT BICOLORABLE.\n");

   }
   else{
     printf("BICOLORABLE.\n");

   }

      for(int i=0;i<n;i++)
     {
     node[i].clear();
         }
   }

return 0;
    }


