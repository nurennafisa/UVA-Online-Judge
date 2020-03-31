#include<bits/stdc++.h>
using namespace std;
int cum[100000];
int main()
{
    int n,p,m,d,i,j,a,b;
    while(scanf("%d",&n)!=EOF)
    {

        for(int i=1;i<=n;i++)
        {
            scanf("%d",&p);
            cum[i]=p;

        }
        sort(cum,cum+n);

        scanf("%d",&m);
        int sum=0;
        int Min=1000000;
        for( i=1;i<=n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                sum=cum[i]+cum[j];
                if(sum==m)
            {
                d=i-j;
                 if(d<Min)
                {
                    Min=d;
                }
                if(i>=j)
                    {
                    a=cum[j];
                    b=cum[i];
                    }

                    if(i<j)
                    {

                    a=cum[i];
                    b=cum[j];
                    }
                    }


            }
            }


            if(a<=b)
            {
            printf("Peter should buy books whose prices are %d and %d.\n",a,b);
            }
            if(a>b)
            {
            printf("Peter should buy books whose prices are %d and %d.\n",b,a);
            }


               if(n!=EOF)
               {
                   cout<<endl;
               }

        memset(cum,0,sizeof cum);
    }



       return 0;
}
