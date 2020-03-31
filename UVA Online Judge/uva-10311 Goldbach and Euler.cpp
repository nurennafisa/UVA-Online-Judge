#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
long long int prime[3000000] , nPrime;
long long int mark[10000002];
void sieve(long long int n)
{
    long long int i , j , limit = sqrt(n * 1.) + 2;
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
    long long int n,x1,y1,x,y,c;
    sieve(1000000);
    while(scanf("%lld",&n)==1)
    {

        long long int Min=999999999;
        c=0;
        for(int i=0;prime[i]<=n;i++)
        {

             x=prime[i];
             y=n-x;
            if(mark[y]!=1)
            {

            if(x+y==n)
            {
                c++;
                int d=y-x;
                if(d<Min)
                {
                    Min=d;
                     x1=y;
                     y1=x;
                }

            }
            }

        }
        if(c!=0)
        {
            printf("%lld = %lld + %lld\n",n,x1,y1);

        }
        else{
             printf("%lld is not the sum of two primes!\n",n);
        }

    }



}
