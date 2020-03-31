#include<bits/stdc++.h>
using namespace std;
vector<string>a;
vector<string>b;
vector<string>n1;
int pr[1005][1005], dp[1005][1005];
string x, y;

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
                pr[i][j] = 1;
            }
            else if(dp[i - 1][j] >= dp[i][j - 1])
            {
                dp[i][j] = dp[i - 1][j];
                pr[i][j] = 2;
            }
            else
            {
                dp[i][j] = dp[i][j - 1];
                pr[i][j] = 3;
            }
        }
    }

    return dp[m][n];
}
//1 hoile uporer corner e,2 hoile upore,3 hoile pashe(pr)
void print (int i, int j)
{
    if(i == 0 || j == 0)
    {
        return;
    }

    if(pr[i][j] == 1)
    {
        print(i-1,j-1);
        n1.push_back(a[i-1]);

         //cout<<a[i-1]<<" ";
        //printf("%c ",x[i-1]);
    }
    else if(pr[i][j] == 2)
    {
        print(i - 1, j);
    }
    else
    {
        print(i,j-1);
    }


}

int main()
{
    string s1,s2;

    while(getline(cin, s1))
    {

        istringstream is(s1);
        while(is>>s2)
        {
            a.push_back(s2);
        }
        while(getline(cin, s1))
        {
            if(s1 == "#") break;
            istringstream is(s1);
            while(is>>s2)
            {
                a.push_back(s2);
            }
        }
        while(getline(cin, s1))
        {
            if(s1 == "#")
                break;
            istringstream is(s1);
            while(is>>s2)
            {
                b.push_back(s2);
            }
        }

        memset(dp,0,sizeof dp);
        int m = a.size(), n = b.size();
        int ans  = lcs(m,n);

        print(m,n);
        for(int i=0;i<n1.size()-1;i++)
        {
            cout<<n1[i]<<" ";
        }
        cout<<n1[n1.size()-1];
        printf("\n");
        s1.clear();
        s2.clear();
        a.clear();
        b.clear();
        n1.clear();
}
}
