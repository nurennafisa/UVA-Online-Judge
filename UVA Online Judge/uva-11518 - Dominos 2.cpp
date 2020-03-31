#include<bits/stdc++.h>
using namespace std;
vector<int>node[10006];
int visit[10006];
int c;
void dfs (int u)
{
    c++;
//cout<<"here at 1st"<<endl;
      //c++; JOKHN KOITA NODE EI CONNECTED E ACHE JANTE HOBE
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
    int test,n,m,l,sum,z;
    scanf("%d",&test);
    for(int i=1;i<=test;i++)
    {
        scanf("%d%d%d",&n,&m,&l);
        for(int j=1;j<=m;j++)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            node[a].push_back(b);
        }
 memset(visit,-1,sizeof visit);
        for(int k=1;k<=l;k++)
        {
            scanf("%d",&z);
dfs(z);

               printf("%d\n",c);
               c=0;


        }
        for(int d=1;d<=n;d++)
        {
            node[d].clear();
        }


    }
}
