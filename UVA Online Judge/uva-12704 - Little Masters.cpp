#include<bits/stdc++.h>
using namespace std;
int main()
{
int test;
   float r,x,y,d;
   while(scanf("%d",&test)==1)
   {
       for(int i=1;i<=test;i++)
       {
           scanf("%f%f%f",&x,&y,&r);
           d=sqrt(x*x+y*y);
           printf("%.2f %.2f\n",r-d,r+d);
       }
   }

return 0;
}


