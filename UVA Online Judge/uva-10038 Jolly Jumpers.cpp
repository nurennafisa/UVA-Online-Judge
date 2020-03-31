#include<bits/stdc++.h>
using namespace std;
long long int a[10000000];

int main()
{
    long long int n,m,d;
    vector<long long int>v;
    while(scanf("%lld",&n)==1)
    {

        for(int i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);


        }

        for(int j=0;j<n-1;j++)
        {
            d=abs(a[j]-a[j+1]);

            v.push_back(d);


        }
        sort(v.begin(),v.end());
        int c=0;
        for(int k=0;k<n-1;k++)
        {

           if(v[k]==(k+1))
           {
               c++;
           }
        }

        if(c==(n-1))
        {
            printf("Jolly\n");
        }
        else{
            printf("Not jolly\n");
        }
        memset(a,0,sizeof a);
         v.clear();
    }

}
