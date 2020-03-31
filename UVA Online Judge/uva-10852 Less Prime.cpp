#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int prime[3000000] , nPrime;
int mark[10000002];
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
    sieve(1000000);
    int test,n,p,r,Max,ans;
    while(scanf("%d",&test)==1)
    {
        for(int i=1;i<=test;i++)
        {
            scanf("%d",&n);


        Max=-1;
        for(int j=0;prime[j]<=n;j++)
        {
            p=1;
            while((p*prime[j])<=n)
            {
                r=n-p*prime[j];

                p++;
            }
            if(r>Max)
            {
                Max=r;
                ans=prime[j];

            }
        }
        cout<<ans<<endl;
        }
    }




}
