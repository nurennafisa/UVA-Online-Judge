#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,n1,n2,b1,b2,q1,q2,sum1,sum2;
    char s[1000000];
    vector<int>v;

    while(scanf("%d",&test)==1)
    {
       for(int i=1;i<=test;i++)
       {
           scanf("%s",s);
           sscanf(s,"%d",&n1);
           while(n1>0)
           {
               q1=n1%2;
               v.push_back(q1);
               n1=n1/2;
           }
           reverse(v.begin(),v.end());
           sum1=0;
           b1=count(v.begin(),v.end(),1);
           v.clear();
           sscanf(s,"%x",&n2);
           while(n2>0)
           {
               q2=n2%2;
               v.push_back(q2);
               n2=n2/2;
           }
           reverse(v.begin(),v.end());

           b2=count(v.begin(),v.end(),1);
           v.clear();
           printf("%d %d\n",b1,b2);


       }









        }





}





