#include <bits/stdc++.h>
using namespace std;
int visit[10000];
vector <int> node[1000];
vector<int>t;
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
    t.push_back(u);

}
int main()
{
     int n, e;
      while(cin >> n >> e)
      {
          if(n==0 && e==0)
          {
              break;
          }

    memset(visit,-1,sizeof visit);


    int a, b,s;
    for(int i = 0; i < e; i++)
    {
        cin >> a >> b;

        node[a].push_back(b);

    }
    for(int i=1;i<=n;i++)
    {
        if(visit[i]==-1)
        {
            dfs(i);
        }
    }
  reverse(t.begin(),t.end());
   for(int i=0;i<t.size()-1;i++)
   {
       cout<<t[i]<<" ";
   }
   cout<<t[t.size()-1]<<endl;
   t.clear();
   for(int i=1;i<=n;i++)
   {
       node[i].clear();
   }
}
}
