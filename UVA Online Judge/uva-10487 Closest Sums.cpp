#include<bits/stdc++.h>
using namespace std;
int a[1008];

int main()
{
    int n,q,r,sum,Min,res;
   int x=0;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        for(int k=0;k<n;k++)
        {
            for(int l=k+1;l<n;l++)
            {
                sum=a[k]+a[l];
                v.push_back(sum);

            }
        }
        sort(v.begin(),v.end());



        scanf("%d",&q);
    x++;
    printf("Case %d:\n",x);

        for(int j=1;j<=q;j++)
        {
            scanf("%d",&r);
             Min=999999999;
            for(int t=0;t<v.size();t++)
            {
                  sum=v[t]-r;
                  sum=abs(sum);
                if(sum<=Min)
                {

                   Min=sum;
                   res=v[t];


                }
            }
             printf("Closest sum to %d is %d.\n",r,res);



        }
         v.clear();
            memset(a,0,sizeof a);

    }










    return 0;
}
