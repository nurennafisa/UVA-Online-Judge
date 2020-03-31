#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,s,r;

    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
        s=(a+b+c)/2;
        r=sqrt(s*(s-a)*(s-b)*(s-c))/s;

          if(a==0 || b==0 || c==0)
          {
                printf("The radius of the round table is: 0.000\n");
                break;
          }
        printf("The radius of the round table is: %.3lf\n",r);

    }
}
