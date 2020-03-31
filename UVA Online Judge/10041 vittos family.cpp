#include<bits/stdc++.h>
using namespace std;
int a[30008];
int main()
{
    int test,r,sum,Min;
    while(scanf("%d",&test)==1)
    {
        for(int i=1;i<=test;i++)
        {
            scanf("%d",&r);
            for(int i=0;i<r;i++)
            {
                scanf("%d",&a[i]);
            }
            Min=99999999;
            for(int i=0;i<r;i++)
            {
                sum=0;
                for(int j=0;j<r;j++)
                {
                    sum=sum+abs(a[i]-a[j]);
                }
                if(sum<Min)
                {
                    Min=sum;
                }

            }
            cout<<Min<<endl;
            memset(a,0,sizeof a);
        }
    }

    return 0;
}
