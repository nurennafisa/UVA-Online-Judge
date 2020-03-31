#include<bits/stdc++.h>
using namespace std;
int sum,Max;
string s,ss,sk;
 int prime[30000] , nPrime;
int mark[10000002];

void sieve(int n)
{
    int i , j , limit = sqrt(n * 1.) + 2;
    mark[1] = 1;
    for(int i = 4; i <= n; i += 2)
        mark[i] = 1;
    prime[nPrime++] = 2;

    for(i = 3; i <= n; i++)
    {
        if(!mark[i])
        {
            prime[nPrime++] = i;
            if(i <= limit)
            {
                for(j = i * i; j <= n; j+= i * 2)
                {
                    mark[j] = 1;
                }
            }
        }
    }
}


int main()
{
    sieve(10000000);
    while(cin>>s)
{
    if(s=="0")
    {
        break;
    }

Max=-1;
   for(int i=0;i<s.size();i++)
   {
       for(int j=0;j<s.size();j++)
   {

       ss=s.substr(i,j);


        sum=0;
       for(int k=0;k<ss.size();k++)
       {
           sum=sum*10+ss[k]-48;

       }

       if(mark[sum]!=1)
       {
           if(sum>Max)
           {
               Max=sum;
           }
       }
       ss.clear();
   }
   }
   cout<<Max<<endl;
   s.clear();


}





    return 0;
}

