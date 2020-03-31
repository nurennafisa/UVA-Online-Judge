#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test,c,s;
    long long int L,U;
    while(scanf("%d",&test)==1)
    {
        for(int k=1;k<=test;k++)
        {
            scanf("%lld%lld",&L,&U);
            int Max=-1;
            int x=0;

            for(int i=L;i<=U;i++)
            {
                     c=0;
                for(int j=1;j<=sqrt(i);j++)
                {
                    if(i%j==0)
                    {
                        c++;
                        if(i/j==j)
                            continue;
                            s=i/j;
                        c++;

                }
                }



                   if(c>Max)
                {
                     x=i;
                    Max=c;

                }

            }
            printf("Between %lld and %lld, %d has a maximum of %d divisors.",L,U,x,Max);
            printf("\n");
        }
    }


    return 0;
}
