#include<bits/stdc++.h>
using namespace std;
long long int a[10007];
long long int dp[10005][255];
  long long int n,k;
  bool comb(int i,long long int sum)
  {
      if(i==n)
      {
          if(sum%k==0)
          {
              return true;
          }
          else
          {
              return false;
          }
      }
      if(dp[i][sum]!=-1)
      {
          return dp[i][sum];
      }
      long long int ret;
      ret=(comb(i+1,(sum+a[i])%k) | comb(i+1,(sum-a[i])%k));
      dp[i][sum]=ret;
      return dp[i][sum];
  }
int main()
{
int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++)
    {
        scanf("%lld%lld",&n,&k);
        for(int j=0;j<n;j++)
        {
               scanf("%lld",&a[j]);
        }
        memset(dp,-1,sizeof dp);

        bool result=comb(1,(a[0]%k));
        if(result)
        {
            printf("Divisible\n");
        }
        else
        {
             printf("Not divisible\n");
        }

    }
}
