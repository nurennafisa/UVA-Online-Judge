#include<bits/stdc++.h>
using namespace std;
long long int arr[123];
int main()
{
    long long int test,n,q,t,x;
    string s;

    while(scanf("%lld",&test)==1)
    {
        for(int d=1;d<=test;d++)
        {

            cin>>n;

          for(int i = 1; i <=n; i++)
   {
       t=i;
       while(t>0)
       {
           q=t%10;
           s+=(q+48);
           t=t/10;
       }


   }

   for(int k=0;k<s.size();k++)
   {
         x=s[k]-48;

        arr[x]++;


   }

   for(int i = 0; i <9; i++)
   {

           printf("%lld ",arr[i]);

   }
   cout<<arr[9]<<endl;
   memset(arr,0,sizeof arr);
   s.clear();


        }
    }

    return 0;
    }
