#include<bits/stdc++.h>
using namespace std;

long long int g(long long int a,long long int b,long long int k)
{
    long long int c,c1,s;
    c1=0;
    for(long long int i=a;i<=b;i++)
    {
         c=0;
         if(i%k==0)
         {
        for(long long int j=1;j<=sqrt(i);j++)
                {
                    if(i%j==0)
                    {


                        c1++;

                        if(i/j==j)
                            continue;
                            s=i/j;
                        c1++;
                    }

                }
         }
          c=c+c1;
}

return c;
}
long long int h(long long int a,long long int b,long long int k)
{
    long long int sum,s,sum1;
    sum=0;
     for(long long int i=a;i<=b;i++)
    {
        sum1=0;
        if(i%k==0)
         {
        for(long long int j=1;j<=sqrt(i);j++)
                {
                    if(i%j==0)
                    {
                        sum1=sum1+j;
                        if(i/j==j)
                            continue;
                            s=i/j;
                        sum1=sum1+s;

                }
}
}
  sum=sum+sum1;

    }
return sum;
}
int main()
{
    int test;
    long long int a,b,k,c,sum;
    while(scanf("%d",&test)==1)
    {
        for(long long int i=1;i<=test;i++)
        {
            scanf("%lld%lld%lld",&a,&b,&k);
            c=g(a,b,k);
            sum=h(a,b,k);
            printf("%lld %lld\n",c,sum);

        }
    }

         return 0;
}
