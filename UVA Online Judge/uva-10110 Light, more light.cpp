#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n,p;


    while(scanf("%lld",&n))
    {
        if(n==0)
        {
            break;
        }
        p=sqrt(n);
        if(p*p==n)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
        }


}

