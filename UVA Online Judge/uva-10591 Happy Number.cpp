#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,n,sum,f,q,c,r;
    string s;
    while(scanf("%d",&test)==1)
    {
        for(int i=1;i<=test;i++)
        {
         cin>>n;
         r=n;
            f=0;
              while(sum>9)
              {
            n=n*n;
            sum=0;
            while(n>0)
            {
                q=n%10;

                sum=sum+(q*q);

                n=n/10;

            }
            if(sum>=1 && sum<=9)
                {
                    f=sum;
                    break;

                }

              }
            if(f==1)
            {
                printf("Case #%d: %d is a Happy number.\n",i,r);
            }
            else
            {
                printf("Case #%d: %d is a Unhappy number.\n",i,n);
            }
        }
    }
}
