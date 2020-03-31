#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int prime[1000000], nPrime;
bool mark[1000007];
int factor[1000000];
int ck;
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
    sieve(50000);
    int n;
    /// just algo te kichu na kore print kore main function e systematic print kore dichi ... normally algo te hat bina kaje algo touch kora thik na .. karon  oi jinis ta bes call hoy
    while(cin >> n){
    if(n==0)
        break;
    if(n>0)
    {
        prime_factor(n);
        int f=0;
        printf("%d = ",n);

        for(int i = 0; i < ck; i++)
        {
            if(f)
                printf(" x ");

            printf("%d",factor[i]);
            f=1;
        }
        printf("\n");
    }
    else
    {
        prime_factor(abs(n));
        printf("%d = -1",n);
        for(int i = 0; i < ck; i++)
        {

            printf(" x %d",factor[i]);

        }
        printf("\n");



    }

    }
}
