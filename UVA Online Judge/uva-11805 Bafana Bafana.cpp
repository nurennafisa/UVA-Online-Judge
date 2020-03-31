#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,n,k,p,c;
    while(scanf("%d",&test)==1)
    {
        for(int i=1;i<=test;i++)
        {
            scanf("%d%d%d",&n,&k,&p);
            c=k;
            for(int j=1;j<=p;j++)
            {

                   c++;

                if(c>n)
                {
                   c=c-n;
                }

                if(c==n && j!=p)
                {
                    c=0;
                }
            }
            printf("Case %d: %d\n",i,c);
        }
    }

    return 0;
}
