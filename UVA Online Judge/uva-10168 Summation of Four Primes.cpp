#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int prime[3000000] , nPrime;
int mark[10000002];
int visit[1000000];
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
   long long int n,x,y;
    sieve(10000000);//10^7 er beshi pare na
    while(scanf("%lld",&n)==1)
    {
if(n<=7)
{
    printf("Impossible.\n");
    continue;
}
if(n%2!=0)
{
    n=n-(2+3);
    printf("2 3 ");
}
else{
    n=n-(2+2);
     printf("2 2 ");
}

        for(int i=0;prime[i]<=n/2;i++)
        {

             x=prime[i];

             y=n-x;
            if(mark[y]!=1)
            {

            if(x+y==n)
            {
                printf("%lld %lld\n",x,y);
                break;
            }
            }

        }



    }



}
