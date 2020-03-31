#include<bits/stdc++.h>
using namespace std;
int mile(int d)
{
    int cost=0;
   for(int i=0;i<=d;i=i+30)
   {
       cost=cost+10;
   }
    return cost;
}
int juice(int d)
{
    int cost=0;
    for(int i=0;i<=d;i=i+60)
   {
       cost=cost+15;
   }
    return cost;
}
int main()
{
    int test,t1,t2,n,d;
    while(scanf("%d",&test)==1)
    {


    for(int i=1;i<=test;i++)
    {
        scanf("%d",&n);
        t1=0;
        t2=0;
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&d);

                   t1=t1+mile(d);
             t2=t2+juice(d);



        }
        if(t1<t2)
        {
            printf("Case %d: Mile %d\n",i,t1);
        }
       else if(t1>t2)
        {
            printf("Case %d: Juice %d\n",i,t2);
        }
        else
        {
            printf("Case %d: Mile Juice %d\n",i,t1);
        }
    }
}
}
