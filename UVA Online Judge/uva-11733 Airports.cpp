#include <bits/stdc++.h>
using namespace std;
int cnt;
struct node
{
    int u, v, w;
    node(int a, int b, int c)
    {
        u = a;
        v = b;
        w = c;
    }
    bool operator < (const node& p) const
    {
        return w < p.w;
    }
};
vector <node> edge;
int par[10005];

int find (int u)
{
    if(u != par[u])
        par[u] = find(par[u]);

    return par[u];
}
int krush_kal (int n)
{
    sort(edge.begin(), edge.end());
    for(int i = 1; i <= n; i++)
    {
        par[i] = i;

    }
     cnt = 0;
    int cost = 0;
    for(int i = 0; i < (int)edge.size(); i++)
    {
        int u , v;
        u = find(edge[i].u);
        v = find(edge[i].v);

        if(u != v)
        {
            cnt++;
            cost += edge[i].w;
            par[v]=u;
            if(cnt == n - 1)
                break;
        }
    }
    return cost;
}
int main()
{
     int n, m,a,r,test;
  scanf("%d",&test);

         for(int k=1;k<=test;k++)
         {

          cin>>n>>m>>a;
         for(int i = 0; i < m; i++)
         {
             int u, v, w;
             cin >> u >> v >> w;


          if(w<a)
             edge.push_back(node(u, v, w));
         }


        r=krush_kal(n);

      printf("Case #%d: %d %d\n",k,(a*(n-cnt)+r),(n-cnt));
        edge.clear();

     }

}

