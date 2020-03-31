#include<bits/stdc++.h>
using namespace std;
 int a[100009];
int main()
{
int test,n,Max,sum,j,k,d;
  while( scanf("%d",&test)==1)
  {


        for(int h=1;h<=test;h++)
        {
            scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        Max=-2147483647;
        d=-2147483647;
        for(int j=1;j<n;j++)
        {
            if(a[j]>Max)
            {
                Max=a[j];
            }
            if(Max-a[j+1]>d)
            {
                d=Max-a[j+1];
            }
        }





    printf("%d\n",d);
        memset(a,0,sizeof a);
        }
  }

    }

