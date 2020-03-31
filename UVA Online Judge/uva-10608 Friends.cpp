#include <bits/stdc++.h>
using namespace std;
int visit[30001];
vector <int> node[30005];
int cnt;
void dfs (int u)
{

     cnt++;
    visit[u] = 1;
    for(int i = 0; i < node[u].size(); i++)
    {
        int v = node[u][i];
        if(visit[v] == -1)
        {
            dfs(v);
        }

    }
}
int main()
{
    int n, e,t;
    cin>>t;
    while(t--)
    {

    memset(visit,-1,sizeof visit);
    cin >> n >> e;
    int a, b;
    for(int i = 0; i < e; i++)
    {
        cin >> a >> b;
        node[a].push_back(b);
        node[b].push_back(a);
    }
    int mx=-1;
    for(int i = 1; i <= n; i++)
    {
        if(visit[i] == -1)
        {
            cnt=0;
            dfs(i);
            if(mx<cnt)
                mx=cnt;


        }
    }
   cout<<mx<< endl;
   for(int i=0;i<=n;i++)
   {
       node[i].clear();
   }
}
}
