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
    int n,x,y;
    sieve(1000000);
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        int c=0;
        int c1=0;

        for(int i=0;prime[i]<=n;i++)
        {

             x=prime[i];

             y=n-x;
            if(mark[y]!=1)
            {

            if(x+y==n)
            {
                c++;
                if(x!=y)
                {
                    c1++;
                }



            }
            }

        }
        int r=c-(c1/2);

        printf("%d\n",r);


    }



}
