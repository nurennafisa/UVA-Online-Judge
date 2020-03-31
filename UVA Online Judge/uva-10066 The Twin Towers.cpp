#include<bits/stdc++.h>
using namespace std;
int dp[1006][1006];
int a[1000];
int b[1000];
int main()
{
    int n1,n2,test=0;

    while(cin>>n1>>n2)
    {
        test++;
        if(n1==0 && n2==0)
        {
            break;
        }
        for(int i=1;i<=n1;i++)
        {
            scanf("%d",&a[i]);
        }
         for(int i=1;i<=n2;i++)
        {
            scanf("%d",&b[i]);
        }
        for(int i=1;i<=n2;i++)
        {
            for(int j=1;j<=n1;j++)
            {
                if(a[j]==b[i])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
         printf("Twin Towers #%d\n",test);
         printf("Number of Tiles : %d\n\n",dp[n2][n1]);



        memset(dp,0,sizeof dp);
         memset(a,0,sizeof a);
          memset(b,0,sizeof b);

        }



    }


