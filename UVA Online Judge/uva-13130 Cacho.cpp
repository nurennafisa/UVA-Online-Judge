#include <bits/stdc++.h>
using namespace std;

int main()
{
   int test,a,b,c,d,e,d1,d2,d3,d4;

   while(scanf("%d",&test)==1)
   {
       for(int i=1;i<=test;i++)
       {
           scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
           d1=b-a;
           d2=c-b;
           d3=d-c;
           d4=e-d;
           if(d1==d2 && d1==d3 && d1==d4)
           {
               cout<<"Y"<<endl;
           }
           else
            {
               cout<<"N"<<endl;
           }
       }
   }
}
