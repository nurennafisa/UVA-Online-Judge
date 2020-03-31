#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,g,x;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        {
            break;
        }
    g=0;
for(long long int i=1;i<n;i++)
{
for(long long j=i+1;j<=n;j++)
{
 x=__gcd(i,j);
 g+=x;
}
}
cout<<g<<endl;

    }

    return 0;
}
