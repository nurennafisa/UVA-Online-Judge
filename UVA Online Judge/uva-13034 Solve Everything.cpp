#include<bits/stdc++.h>
using namespace std;
int a[19];
int main()
{
    int test,f;
    while(scanf("%d",&test)==1)
    {
        for(int i=1;i<=test;i++)
        {
            f=0;
        for(int j=1;j<=13;j++)
        {
            scanf("%d",&a[j]);
            if(a[j]==0)
            {
                f=1;
            }
        }


         if(f==0)
        {
             printf("Set #%d: Yes\n",i);
        }
         else
        {
            printf("Set #%d: No\n",i);
        }
        }
        memset(a,0,sizeof a);
    }
}
