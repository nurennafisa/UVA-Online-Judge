#include<bits/stdc++.h>
using namespace std;
unsigned long long f(int n)
{

 int i;
    unsigned long long factorial = 1;

        for(i=1; i<=n; ++i)
        {
            factorial *= i;
        }
        return factorial;

}
int main()
{
    unsigned long long total;
    int test;
    string s;

map<char,int>mp;
 map<char,int>::iterator it;
    while(scanf("%d",&test)==1)
    {
        for(int j=1;j<=test;j++)
        {
            cin>>s;
            for(int i=0;i<s.size();i++)
    {

        if(mp.count(s[i])==0)
        {
            mp[s[i]]=1;

        }
        else{mp[s[i]]=mp[s[i]]+1;
        }

    }
    total=f(s.size());

    for(it=mp.begin();it!=mp.end();it++)
    {
        total=total/f(it->second);
    }
    printf("Data set %d: %llu\n",j,total);
    mp.clear();
    s.clear();


        }

    }

    return 0;
}
