#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,n,cost,m;
    char ch;
    double sum,r;
    map<char,int>mp;
    string s;
    while(scanf("%d",&test)==1)
    {
        for(int i=1;i<=test;i++)
        {
            scanf("%d",&n);
            for(int j=1;j<=n;j++)
            {
                cin>>ch;
                cin>>cost;
                mp[ch]=cost;

            }
            scanf("%d",&m);
            getchar();
              sum=0;
            for(int l=1;l<=m;l++)
            {

            getline(cin,s);

            for(int k=0;k<s.size();k++)
            {
                if(mp.find(s[k])!=mp.end())
                {
                    sum=sum+mp[s[k]];
                }
            }
            s.clear();

        }

   r=sum/100;
            printf("%.2lf$\n",r);
            s.clear();
            mp.clear();
        }
    }

}
