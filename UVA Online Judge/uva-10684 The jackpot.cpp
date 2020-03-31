#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int main()
{
   int n,Max,sum;
   while(scanf("%d",&n)==1)
   {
       if(n==0)
       {
           break;
       }
       for(int i=1;i<=n;i++)
       {
           scanf("%d",&a[i]);
       }
       Max=0;
       sum=0;

       for(int j=1;j<=n;j++)
       {

               sum=sum+a[j];


              if(sum>Max)
              {
                  Max=sum;
              }

if(sum < 0)
{
   sum = 0;
}


       }

       if(Max>0)
       {
            printf("The maximum winning streak is %d.\n",Max);
       }
       else
       {
           printf("Losing streak.\n");
       }
       memset(a,0,sizeof a);
   }


    return 0;
}















