#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int prime[3000000] , nPrime;
int mark[10000002];
int dp[10000002];
int sum(int n)
{
    int s=0;
    while(n!=0)
    {
        s=s+(n%10);
        n=n/10;
    }

    return s;
}
void sieve(int n)
{
    int i , j , limit = sqrt(n * 1.) + 2;
    mark[1] = 1;
    for(int i = 4; i <= n; i += 2)
        mark[i] = 1;
    prime[nPrime++] = 2;

    for(i = 3; i <= n; i++)
    {
        if(!mark[i])
        {
            prime[nPrime++] = i;
            if(i <= limit)
            {
                for(j = i * i; j <= n; j+= i * 2)
                {
                    mark[j] = 1;
                }
            }
        }
    }
}
int main()
{
    sieve(10000000);
    int cnt,test,a,b;
    cnt=0;
    dp[0]=0;
    for(int i=1;i<=10000000;i++)
    {

        if(mark[i]==0 && mark[sum(i)]==0)
        {
            cnt++;

        }
       dp[i]=cnt;

    }

while(scanf("%d",&test)==1)
{
    for(int j=1;j<=test;j++)
    {
        scanf("%d%d",&a,&b);

        cout<<dp[b]-dp[a-1]<<endl;
    }
}



}

