#include<bits/stdc++.h>
using namespace std;
int main()
{
int test;
long long int s,r;

while(scanf("%d",&test)==1)
{
    for(int i=1;i<=test;i++)
    {
       scanf("%lld",&s);

      r=s*(s+2);
      cout<<r<<endl;

    }
}

    return 0;
}
