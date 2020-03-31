#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int test,n,r1,m;
      vector<int>v;
   while(scanf("%d",&test)==1)
   {
       for(int i=1;i<=test;i++)
       {
           cin>>m;
           for(int j=1;j<=m;j++)
           {
           cin>>n;
               v.push_back(n);
           }
           sort(v.begin(),v.end());
           r1=floor(v.size()/2);

              cout<<"Case "<<i<<": "<<v[r1]<<endl;
           v.clear();
       }

   }


       return 0;
 }
