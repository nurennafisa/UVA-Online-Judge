#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,a,b,q,t=0;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            break;
        }
          b=0;
        a=0;
        t++;
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&q);
            if(q==0)
            {
                a=a+1;
            }
            else{
                b=b+1;
            }
        }
        printf("Case %d: %d\n",t,b-a);

    }
}
