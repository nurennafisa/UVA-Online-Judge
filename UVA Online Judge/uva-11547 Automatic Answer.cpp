#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,test,q,r;
    while(scanf("%lld",&test)==1)
    {
        for(int i=1;i<=test;i++)
        {


        scanf("%lld",&n);
        n=n*567;
        n=n/9;
        n=n+7492;
        n=n*235;
        n=n/47;
        n=n-498;
         q=n/10;
        n=n/10;
        r=n%10;
        if(r<0)
        {
            r=-1*r;
        }
        cout<<r<<endl;
        r=0;
        n=0;
        q=0;
        }
    }
}


