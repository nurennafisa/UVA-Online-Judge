#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int main()
{
     int n,lcm,x,q;
    x=1;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        for(int i=1;i<=n;i++)
        {
         a[i]=i;
        }
    lcm=a[1];
       for(int j=2;j<=n;j++)
       {
           lcm=(a[j]*lcm)/__gcd(a[j],lcm);
       }



    while(lcm>0)
    {
        q=lcm%10;
        lcm=lcm/10;
        if(q!=0)
        {
            cout<<q<<endl;
            memset(a,0,sizeof a);
            break;
        }
    }
    }

    }



