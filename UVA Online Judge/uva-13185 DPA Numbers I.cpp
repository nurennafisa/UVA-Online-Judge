#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test,sum,s;
    long long int n;
    while(scanf("%d",&test)==1)
    {
        for(int k=1;k<=test;k++)
        {
            scanf("%lld",&n);

            for(int i=1;i<=n;i++)
            {
                   sum=0;
                for(int j=1;j<=sqrt(i);j++)
                {
                    if(i%j==0 && j!=n)
                    {
                        sum=sum+j;

                        if(i/j==j)
                            continue;
                             s=i/j;
                             if(s!=n)
                             {
                                  sum=sum+s;
                             }



                }
                }

            }

            if(sum<n)
            {
                printf("deficient\n");
            }
            else if(sum>n)
            {
                printf("abundant\n");
            }
            else if(sum==n)
            {
                printf("perfect\n");
            }

        }
    }


    return 0;
}
