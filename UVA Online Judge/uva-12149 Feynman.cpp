#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,n,sum;
    while(scanf("%d",&n)==1)
    {

            if(n==0)
            {
                break;
            }
           sum=0;
           for(int i=n;i>=1;i--)
           {
               sum=sum+(i*i);

           }
           printf("%d\n",sum);
        }
    }


