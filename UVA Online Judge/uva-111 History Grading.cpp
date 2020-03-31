#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];

 vector<int>a,b;
    string ss,item;
int lcs (int m, int n)
{
    for(int i = 1; i <= m; i++)
        dp[i][0] = 0;
    for(int j = 0; j <= n; j++)
        dp[0][j] = 0;
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(a[i-1] == b[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;

            }
            else if(dp[i - 1][j] >= dp[i][j - 1])
            {
                dp[i][j] = dp[i - 1][j];

            }
            else
            {
                dp[i][j] = dp[i][j - 1];

            }
        }
    }

    return dp[m][n];
}
int main()
{
    int n,c;

    scanf("%d",&n);
    c=0;
    while(getline(cin,ss))
    {
        c++;
        if(ss.size()==1)
        {
            n=ss[0]-'0';
            ss.clear();
            c=0;
            continue;
        }
        istringstream item(ss);
        if(c==1)
            {
        while(item>>ss)
        {
            int sum=0;
            for(int i=0;i<ss.size();i++)
            {
                sum=sum*10+(ss[i]-'0');
            }

                a.push_back(sum);
    }
            }
            else{

                while(item>>ss)
        {
            int sum=0;
            for(int i=0;i<ss.size();i++)
            {
                sum=sum*10+(ss[i]-'0');
            }

                b.push_back(sum);
    }
    int ans=lcs(n,n);
    cout<<ans<<endl;
    a.clear();
    b.clear();

            }
}
}
