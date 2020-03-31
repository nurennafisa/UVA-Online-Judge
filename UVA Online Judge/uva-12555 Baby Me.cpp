#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int test,a;
    double ans;
    while(scanf("%d",&test)==1)
    {

        for(int i=1;i<=test;i++)
        {
            cin>>a;
            getchar();
           getline(cin,s);
           if(s.size()>3)
           {
             ans= (a*0.5)+ ((s[2]-'0')*0.05);
           }
           else
           {
                ans=(a*0.5);
           }

           printf("Case %d: %g\n",i,ans);

           s.clear();
        }
    }
}
