#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int test,n,s,c;


    while(scanf("%lld",&test)==1)
    {

    for(int i=1;i<=test;i++)
    {
        map<long long int,long long int>mp;
     map<long long int,long long int> :: iterator it;
          map<long long int,long long int> :: iterator it1;
         mp.clear();
        scanf("%lld",&n);
        for(int j=1;j<=n;j++)
        {
            scanf("%lld",&s);
            if(s>0)
            {
                mp[s]=1;
            }
            else if(s<0)
            {
                s=-1*s;
                mp[s]=2;
            }
        }
        c=0;
        it1=mp.begin();
        for(it=mp.begin();it!=mp.end();it++)
        {
         it1++;
         if(it->second!=it1->second)
         {
             c++;
         }

        }
        printf("%lld\n",c);
        mp.clear();

    }
    }
}
