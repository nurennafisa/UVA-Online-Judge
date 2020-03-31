#include <bits/stdc++.h>
using namespace std;
int visit[500000];
vector <int> node[500000];
void dfs (int u)
{
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
{   int n, e,k=0;

while(    cin >> n >> e)
{
    k++;

if(n==0 && e==0)
{
    break;
}
    memset(visit,-1,sizeof visit);


    int a, b;
    for(int i = 0; i < e; i++)
    {
        cin >> a >> b;
        node[a].push_back(b);
        node[b].push_back(a);
    }
       int c = 0;
      for(int i = 1; i <= n; i++)
      {
          if(visit[i] == -1)
          {
              dfs(i);
              c++;
          }
      }
      printf("Case %d: %d\n",k,c);
      for(int i=1;i<=n;i++)
      {
          node[i].clear();

      }

}

}
