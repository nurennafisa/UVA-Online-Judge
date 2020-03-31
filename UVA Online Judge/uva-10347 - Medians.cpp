#include<bits/stdc++.h>
using namespace std;
int main()
{

    double area,d,s,a,b,c;

    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
       s=(a+b+c)/2.0;
       d=s*(s-a)*(s-b)*(s-c);
       area=(4.0/3.0)* sqrt(d);

       if(area>0)
       {


                   printf("%0.3lf\n",area);
       }
       else
       {
           printf("-1.000\n");

       }



    }
}
