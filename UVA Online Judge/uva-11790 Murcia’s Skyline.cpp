#include <bits/stdc++.h>
using namespace std;
int arr[1001] ,w[1000], lis[1001];
int mx,sum,r;
int LIS (int n)
{
    for(int i = 0; i <= n; i++)
    {
        lis[i] = w[i];
    }

    for(int i = 1; i < n; i++)
    {
        sum=0;
        for(int j = 0; j < n; j++)
        {
           if(arr[i] > arr[j] && lis[i] < lis[j] + 1)
            {
                lis[i] = lis[j] + 1;
                sum=sum+w[j];

            }
              if(mx < lis[i])
              {
                  mx =lis[i];
                   if(sum>r)
            {
                  sum=sum+w[i];
                r=sum;
            }
              }
        }
    }
      return r;
}

int main()
{
    int n,test,in,de;
    while(scanf("%d",&test)==1)
    {
        for(int k=1;k<=test;k++)
        {
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &w[i]);
    }

    in=LIS(n);
    reverse(arr,arr+n);
      memset(lis,0,sizeof lis);

     de=LIS(n);
    if(in>=de)
    {
        printf("Case %d. Increasing (%d). Decreasing (%d).\n",k,in,de);
    }
    else
    {
        printf("Case %d. Decreasing (%d). Increasing (%d).\n",k,de,in);
    }
    memset(arr,0,sizeof arr);
     memset(lis,0,sizeof lis);
      memset(w,0,sizeof w);
}
    }

}
