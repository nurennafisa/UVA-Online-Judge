#include<bits/stdc++.h>
using namespace std;
int dp[1006][1006];
int main()
{
    string s1,s2,s3,s4;
    while(getline(cin,s1))
    {
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

                cout<<dp[s2.size()][s1.size()]<<endl;//etate longest ta thake
                 s1.clear();
          s2.clear();

        memset(dp,0,sizeof dp);

        }



    }


