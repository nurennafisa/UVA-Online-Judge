#include<bits/stdc++.h>
using namespace std;
long long int f(long long int n)
{
    long long int r;
    if(n<=100)
    {
        r=f(f(n+11));
    }
    else
    {
        r=n-10;
    }
    return r;
}
int main()
{
    long long int n;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        printf("f91(%lld) = %lld\n",n,f(n));
    }
}
