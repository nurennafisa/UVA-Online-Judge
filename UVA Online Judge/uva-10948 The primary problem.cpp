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
    int n,x1,y1,x,y;
    sieve(1000000);
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        int Max=-1;
        x1=0;
        y1=0;
        for(int i=0;prime[i]<=n;i++)
        {

             x=prime[i];

             y=n-x;
            if(mark[y]!=1)
            {

            if(x+y==n)
            {


                int d=y-x;
                if(d>Max)
                {
                    Max=d;
                     x1=x;
                     y1=y;
                }

            }
            }

        }


        if(x1==0 && y1==0)
        {
            printf("%d:\nNO WAY!\n",n);
        }
        else{


        printf("%d:\n%d+%d\n",n,x1,y1);
        }

    }



}

