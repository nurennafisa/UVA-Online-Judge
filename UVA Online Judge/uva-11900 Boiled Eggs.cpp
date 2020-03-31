#include<bits/stdc++.h>
using namespace std;
int w[100000];
int main()
{
    int n,test,sum,p,q,c;
    while(scanf("%d",&test)==1)
    {

        for(int i=1;i<=test;i++)
        {


        scanf("%d%d%d",&n,&p,&q);
        for(int k=1;k<=n;k++)
        {
            scanf("%d",&w[k]);
        }
        sum=0;
        c=0;
        for(int j=1;j<=n;j++)
        {
            if(sum+w[j]<=q)
            {
                sum=sum+w[j];
                if(c+1<=p)
                {
                    c++;
                }
            }

        }
        printf("Case %d: %d\n",i,c);
        memset(w,0,sizeof w);

        }
    }
}



