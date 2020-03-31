#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
string s;
int main()
{
    int d,test,n,s1;
    while(scanf("%d",&test)==1)
    {
        for(int i=1;i<=test;i++)
        {
            scanf("%d",&n);
            getchar();
            for(int j=1;j<=n;j++)
            {
                cin>>s;
                scanf("%d",&s1);
                mp[s]=s1;
                s.clear();
            }
            scanf("%d",&d);
            getchar();
            cin>>s;
            if(mp.count(s)==0 || mp[s]>(d+5))
            {
                printf("Case %d: Do your own homework!\n",i);
            }
            else if(mp[s]<=d)
            {
                   printf("Case %d: Yesss\n",i);
            }
          else if(mp[s]>d && mp[s]<=d+5)
            {
                   printf("Case %d: Late\n",i);
            }
            s.clear();
            mp.clear();




        }
    }
}
