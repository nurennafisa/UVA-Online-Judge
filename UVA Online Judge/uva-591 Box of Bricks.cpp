#include<bits/stdc++.h>
using namespace std;
int h[1000];
int main()
{
    int n,a,sum,j;
    j=0;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            break;
        }
         j++;
        sum=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&h[i]);
           sum=sum+h[i];
    }
    a=sum/n;
        sum=0;
        for(int i=1;i<=n;i++)
        {
            if(h[i]>=a)
            {
                sum=sum+(h[i]-a);
            }
        }

        printf("Set #%d\n",j);
        printf("The minimum number of moves is %d.\n\n",sum);
        memset(h,0,sizeof h);

    }
}

