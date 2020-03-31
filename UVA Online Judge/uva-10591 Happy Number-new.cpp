#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    int q,sum1=0;
    while(n!=0)
    {
       q=n%10;
       sum1=sum1 +(q*q);

       n=n/10;
    }
    return sum1;
}
int main()
{
    int test,n,n1;
    while(scanf("%d",&test)==1)
    {
        for(int i=1;i<=test;i++)
        {
            scanf("%d",&n);
            n1=n;
            while(n!=0)
            {
                n=sum(n);

                if(n<=9)
                {
                    break;
                }
            }
            if(n==1)
            {
                printf("Case #%d: %d is a Happy number.\n",i,n1);
            }
            else{
                printf("Case #%d: %d is an Unhappy number.\n",i,n1);
            }
        }
    }

}
