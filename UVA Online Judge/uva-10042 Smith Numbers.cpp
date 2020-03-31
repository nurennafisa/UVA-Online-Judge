#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int prime[1000000], nPrime;
bool mark[1000007];
int factor[1000000];
int ck;
int sum(int num)
{
    int  temp, digit, sum = 0;


    temp = num;
    while (num > 0)
    {
        digit = num % 10;
        sum  = sum + digit;
        num /= 10;
    }
    return sum;
}
void sieve(int n)
{
    long long int i, j, limit = sqrt(n * 1.) + 2;

    mark[1] = 1;

    for(int i = 4; i <= n; i += 2)
        mark[i] = 1;
    prime[nPrime++] = 2;

    for(i = 3; i <= n; i++)
    {
        if(mark[i] == 0)
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
void prime_factor ( int n)
{
    ck = 0;
    for(int i = 0; prime[i] <= sqrt(n); i++)
    {
        while(n % prime[i] == 0)
        {
            factor[ck++] = prime[i];
            n = n / prime[i];
        }
    }
    if(n > 1)
    {
        factor[ck++] = n;

    }
}
int main()
{

    sieve(1000000);
    int test,n,sumd,sumf,s;

    while(scanf("%d",&test)==1)
    {
        for(int i=1;i<=test;i++)
        {
            scanf("%d",&n);
            for(int k=n+1; ;k++)
            {
                sumd=sum(k);

                prime_factor(k);

                sumf=0;
                if(ck>1)
                {


                for(int j=0;j<ck;j++)
                {

                    s=sum(factor[j]);
                    sumf=sumf+s;

                }

                if(sumd==sumf)
                {
                    cout<<k<<endl;
                    break;
                }


                            }
            }
        }
    }








}
