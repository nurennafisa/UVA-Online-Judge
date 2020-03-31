#include<bits/stdc++.h>
using namespace std;
int visit[30001];
vector <int> node[30005];

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
{
    char ch;
    string s,s1;
    int test;

    map<char,int>mp;
    mp['A']=0;
    mp['B']=1;
    mp['C']=2;
    mp['D']=3;
    mp['E']=4;
    mp['F']=5;
    mp['G']=6;
    mp['H']=7;
    mp['I']=8;
    mp['J']=9;
    mp['K']=10;
    mp['L']=11;
    mp['M']=12;
    mp['N']=13;
    mp['O']=14;
    mp['P']=15;
    mp['Q']=16;
    mp['R']=17;
    mp['S']=18;
    mp['T']=19;
    mp['U']=20;
    mp['V']=21;
    mp['W']=22;
    mp['X']=23;
    mp['Y']=24;
    mp['Z']=25;


    int a, b;


    //1 er por blank line handle korar jnno
    while(scanf("%d ",&test)==1)
    {
        for(int i=1;i<=test;i++)
        {
                memset(visit,-1,sizeof visit);
            getline(cin,s1);
            ch=s1[0];
            while(getline(cin,s))
            {
                if(s.size()==0)
                {
                    break;
                }
                a=mp[s[0]];
                b=mp[s[1]];
                node[a].push_back(b);
        node[b].push_back(a);
                s.clear();
            }

             int c=0;
    for(int j = 0; j <=mp[ch]; j++)
    {
        if(visit[j] == -1)
        {

            dfs(j);
          c++;


        }
    }
    cout<<c<< endl;
   for(int k=0;k<=mp[ch];k++)
   {
       node[k].clear();
   }
   if(i!=test)
   {
       cout<<endl;
   }

        }
    }

}
