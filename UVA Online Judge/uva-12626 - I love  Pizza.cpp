#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int test,x,y,z,p,q;
    while(scanf("%d",&test)==1)
    {
        for(int i=1;i<=test;i++)
        {
            cin>>s;
            int m=count(s.begin(),s.end(),'M');
             int a=count(s.begin(),s.end(),'A');
              int r=count(s.begin(),s.end(),'R');
               int g=count(s.begin(),s.end(),'G');
                int I=count(s.begin(),s.end(),'I');
                 int t=count(s.begin(),s.end(),'T');
                 a=a/3;
                 r=r/2;
                 x=min(m,a);
                 y=min(x,r);
                 z=min(y,g);
                 p=min(z,I);
                 q=min(p,t);
                 printf("%d\n",q);
                 s.clear();


        }
    }



    return 0;
}
