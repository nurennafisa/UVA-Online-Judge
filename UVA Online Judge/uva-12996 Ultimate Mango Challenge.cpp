#include<bits/stdc++.h>
using namespace std;
int me[100];
int mx[100];
int main()
{

   int test,n,l,sum,c;
    while(scanf("%d",&test)==1)
    {
        for(int i=1;i<=test;i++)
        {

        scanf("%d%d",&n,&l);
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&me[j]);
        }
        for(int k=1;k<=n;k++)
        {
            scanf("%d",&mx[k]);
        }
        c=0;
        sum=0;
        for(int m=1;m<=n;m++)
        {
            if(me[m]<=mx[m] && sum<=l)
            {
                c++;
                sum=sum+me[m];
            }


        }
        if(c==n && sum<=l)
        {
         printf("Case %d: Yes\n",i);
        }
        else
        {

             printf("Case %d: No\n",i);
        }
        memset(me,0,sizeof me);
          memset(mx,0,sizeof mx);


        }

    }
}

