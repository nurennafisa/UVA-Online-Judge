#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
string s;
int main()
{
   int n,q,v,sum;
   while(scanf("%d%d",&n,&q)==2)
   {
       getchar();
       for(int i=1;i<=n;i++)
       {
           cin>>s;
           cin>>v;
           mp[s]=v;
           s.clear();
       }
       getchar();
       for(int j=1;j<=q;)
       {
           sum=0;
           while(cin>>s)
           {
               if(s==".")
               {
                   j++;
                     cout<<sum<<endl;
                     sum=0;
                        s.clear();

               }
               if(mp[s]!=0)
               sum=sum+mp[s];
               s.clear();
           }


       }
       mp.clear();
   }
}
