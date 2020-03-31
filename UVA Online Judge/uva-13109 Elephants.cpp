#include<bits/stdc++.h>
using namespace std;
int main()
{  int test;
 long long int m,w,sum,n;

 while(scanf("%d",&test)==1)
 {
     for(int i=1;i<=test;i++)
     {
          vector<int>a;
         scanf("%lld%lld",&m,&w);
         for(long long int k=0;k<m;k++)
         {
             scanf("%lld",&n);
             a.push_back(n);
         }
         sort(a.begin(),a.end());

         sum=0;
         long long int c=0;
        for(long long int i=0;i<a.size();i++)
        {
            sum=sum+a[i];
            if(sum>w)
            {
                break;
            }
            c++;

        }
         printf("%lld\n",c);
         a.clear();

     }
 }
 return 0;
}
