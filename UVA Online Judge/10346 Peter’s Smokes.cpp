#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,m,r,sum;
    while(scanf("%lld%lld",&n,&k)!=EOF)
    {
        m=n;
        sum=0;
        while(m>=k)
        {
             m=ceil(m/k);
       sum=sum+m;
        }
       m=ceil(sum/k);
       r=n+m;
        printf("%lld\n",r);
    }
    return 0;
}
