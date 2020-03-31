#include<bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int main()
{
    string s1,s2,s3,s4;
    int test=0;
    while(getline(cin,s1))
    {
        test++;
        if(s1=="#")
        {
            break;
        }
        getline(cin,s2);
        for(int i=1;i<=s2.size();i++)
        {
            for(int j=1;j<=s1.size();j++)
            {
                if(s1[j-1]==s2[i-1])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }

                printf("Case #%d: you can visit at most %d cities.\n",test,dp[s2.size()][s1.size()]);//etate longest ta thake
                s1.clear();
          s2.clear();

        memset(dp,0,sizeof dp);

        }



    }


