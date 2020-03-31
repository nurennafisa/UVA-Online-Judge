#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int prime[ 100009] , nPrime;
int mark[1299715];
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
    int n,u,l,d;
    sieve(1299715);
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            break;
        }

        if(mark[n]==0)
        {
            printf("0\n");
        }
        else
        {
            while(n--)
            {
                if(mark[n]==0)
                {
                    l=n;
                    break;
                }
            }
            while(n++)
            {
                if(mark[n]==0)
                {
                    u=n;
                    break;
                }
            }


            d=abs(u-l);
            printf("%d\n",d);
        }
    }

return 0;

}

