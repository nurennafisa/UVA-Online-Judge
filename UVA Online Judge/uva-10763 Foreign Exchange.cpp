#include <bits/stdc++.h>
using namespace std;

int main()
{

 long long int x,y,n;
 vector<int>v1,v2;
 while(scanf("%lld",&n)==1)
 {
     if(n==0)
     {
         break;
     }
     for(int k=1;k<=n;k++)
     {
         scanf("%lld%lld",&x,&y);
         v1.push_back(x);
         v2.push_back(y);


     }
     if(n==1)
     {
           cout<<"NO"<<endl;

     }
     else{
            sort(v1.begin(),v1.end());
     sort(v2.begin(),v2.end());

      if(v1==v2)
      {
          cout<<"YES"<<endl;
      }
      else
      {
          cout<<"NO"<<endl;
      }
     }
      v1.clear();
      v2.clear();
 }












    return 0;

    }
