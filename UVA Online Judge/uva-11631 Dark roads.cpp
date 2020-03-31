#include <bits/stdc++.h>
using namespace std;
struct node
{
    long long int u, v, w;
    node(long long int a,long long int b, long long int c)
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
long long int par[200007];
long long int find (long long int u)
{
    if(u != par[u])
        par[u] = find(par[u]);

    return par[u];
}
long long int krush_kal (long long int n)
{
    sort(edge.begin(), edge.end());
    for(long long int i = 0; i < n; i++)
    {
        par[i] = i;
    }
    long long int cnt = 0;
    long long int cost = 0;
    for(long long int i = 0; i < (int)edge.size(); i++)
    {
        long long int u , v;
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
     long long int n, m,sum;

     while(cin >> n >> m)
     {
         if(n==0 && m==0)
         {
             break;
         }
         sum=0;
         for(long long int i = 0; i < m; i++)
         {
             long long int u, v, w;
             cin >> u >> v >> w;
             sum=sum+w;
             edge.push_back(node(u, v, w));
         }
         long long int r=krush_kal(n);
         if(sum>r)
        cout<<sum-r<< endl;
        else{
               cout<<sum<< endl;
        }
        edge.clear();

     }

}

