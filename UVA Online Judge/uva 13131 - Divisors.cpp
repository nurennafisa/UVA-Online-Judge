#include <bits/stdc++.h>
using namespace std;
int main()
{
   int test;
   long long int n,k,s;
   while(scanf("%d",&test)==1)
   {
       for(int i=1;i<=test;i++)
       {
           scanf("%lld%lld",&n,&k);
           int sum=0;
           for(int j=1;j<=sqrt(n);j++)
           {
               if(n%j==0)
               {
                   if(j%k!=0)
                   {
                       sum=sum+j;
                   }

               if(n/j!=j)
               {
                   s=n/j;
                   if(s%k!=0)
                   {
                       sum=sum+s;
                   }
               }
               }


           }

           printf("%d\n",sum);

       }
   }


    return 0;
}

