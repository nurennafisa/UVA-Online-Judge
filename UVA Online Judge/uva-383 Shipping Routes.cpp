#include <bits/stdc++.h>
#define pb push_back
using namespace std;
vector <int> node[100000];
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
     int n , e,q,r,v;
     string s,s1,s2,s3,s4;
     map<string,int>mp;
    while(scanf("%d",&test)==1)
    {
       printf("SHIPPING ROUTES OUTPUT\n\n");
        for(int i=1;i<=test;i++)
        {
            scanf("%d%d%d",&n,&e,&q);
            getchar();


for(int j=0;j<n;j++)
{
    cin>>s;
    mp[s]=j;
    s.clear();
}
for(int k=0;k<e;k++)
{
    cin>>s1>>s2;
    node[mp[s1]].push_back(mp[s2]);
     node[mp[s2]].push_back(mp[s1]);
}
printf("DATA SET  %d\n\n",i);

for(int l=1;l<=q;l++)
{
     memset(dis, -1, sizeof dis);
     cin>>v;
     getchar();
     cin>>s3>>s4;
     bfs(mp[s3]);
     if(dis[mp[s4]]==-1)
     {
         printf("NO SHIPMENT POSSIBLE\n");
     }
     else{
            r=100*dis[mp[s4]]*v;
        printf("$%d\n",r);
     }
     s3.clear();
      s4.clear();


}
printf("\n");



for(int m=0;m<=n;m++)
     {
     node[m].clear();
         }
          s1.clear();
      s2.clear();
       s3.clear();
      s4.clear();
      mp.clear();
s.clear();







     }
      printf("END OF OUTPUT\n");
}
return 0;
    }


