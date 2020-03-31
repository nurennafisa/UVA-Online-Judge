#include<bits/stdc++.h>
using namespace std;
long long int sum;
long long int rev(long long int n)
{
long long int reversedNumber = 0, remainder;
    while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }

    return reversedNumber;
}
bool palindrome(long long int num){
   long long  int r,temp;
     sum=0;
    temp=num;
    while(num){
         r=num%10;
         num=num/10;
         sum=sum*10+r;
    }
    if(temp==sum)
         return true;
    else
         return false;

}

int main()
{
    int test;
    long long int n,sum1,c;
    while(scanf("%d",&test)==1)
    {
         for(int i=1;i<=test;i++)
        {
           scanf("%lld",&n);
           c=0;
           while(1)
           {
               c++;
               sum1=n+rev(n);
               if(palindrome(sum1)==true)
               {
                   printf("%lld %lld\n",c,sum);
                   break;
               }
               if(palindrome(sum1)==false)
               {    n=sum1;
                   continue;
               }
           }

                }
    }

    return 0;
}

