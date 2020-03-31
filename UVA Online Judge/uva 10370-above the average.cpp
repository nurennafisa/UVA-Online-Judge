#include<bits/stdc++.h>
using namespace std;
int a[1000];
int main()
 {
    int test;
    float n,num,avg,sum;
   while(scanf("%d",&test)==1)
   {
       for(int k=1;k<=test;k++)
       {
       memset(a,0,sizeof a);
        cin>>n;
        sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        avg=sum/n;
        int Max=avg;
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(a[j]>Max)
            {
                c++;
            }
        }
        num=(c*100)/n;
        printf("%0.3f%\n",num);


   }
   }

     return 0;
 }
