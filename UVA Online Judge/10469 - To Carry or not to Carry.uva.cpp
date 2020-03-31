#include<bits/stdc++.h>
using namespace std;
long long int  decimalToBinary(long long int n) {
    int remainder;
 long long int binary = 0, i = 1;

    while(n != 0) {
        remainder = n%2;
        n = n/2;
        binary= binary + (remainder*i);
        i = i*10;
    }
    return binary;
}
long long BinaryTodecimal(long long int num) {
long long int binary_val, decimal_val = 0, base = 1, rem;

    binary_val = num;
    while (num > 0)
    {
        rem = num % 10;
        decimal_val = decimal_val + rem * base;
        num = num / 10 ;
        base = base * 2;
    }
    return decimal_val;
}

long long int binAddition(long long int a,long long int b)
{
     long long  int c; //carry
      while (b != 0) {
               c =(a && b)<< 1;
              a=a^b;
              b=c;


      }
      return a;
}
int main()
{
  long long int b1,b2,b3,b4,sum,sum1;
  while(scanf("%lld%lld",&b1,&b2))
  {
      b3=decimalToBinary(b1);
      b4=decimalToBinary(b2);
      sum1=binAddition(b3,b4);
      sum=BinaryTodecimal(sum1);
      printf("%lld\n",sum);
       b3=0;
       b4=0;
       sum1=0;
       sum=0;
  }


    return 0;
}
