#include<bits/stdc++.h>
using namespace std;
int a[1000];
int main()
{
    int test,n,h,l;
    while(scanf("%d",&test)==1)
    {
        for(int i=1;i<=test;i++)
        {
            scanf("%d",&n);
            for(int j=1;j<=n;j++)
            {
                 scanf("%d",&a[j]);
            }
            h=0;
            l=0;
            for(int k=1;k<n;k++)
            {
                 if(a[k]>a[k+1])
                 {
                     l++;
                 }
                 else if(a[k]<a[k+1])
                 {
                     h++;
                 }
            }
            printf("Case %d: %d %d\n",i,h,l);
            memset(a,0,sizeof a);

           }
            }
            return 0;
            }
