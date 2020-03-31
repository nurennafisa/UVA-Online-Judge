#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  int test;
  long long int k;
  while(scanf("%d",&test)==1)
  {
       int sum=0;
      for(int i=1;i<=test;i++)
      {
         cin>>s;
         if(s=="donate")
         {
             scanf("%lld",&k);
             sum=sum+k;
         }
         if(s=="report")
         {
             cout<<sum<<endl;
         }
          s.clear();


      }
  }

    return 0;
}
