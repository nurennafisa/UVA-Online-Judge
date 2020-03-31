#include<bits/stdc++.h>
using namespace std;
bool isLeapYear(int year)
{
if (year % 400 == 0) return true;
else if(year % 100 == 0) return false;
 else if(year % 4 == 0) return true;
 else return false;
 }
int main()
{
int test,d,m,y,q,n;

while(scanf("%d",&test)==1)
{
    for(int i=1;i<=test;i++)
    {
       scanf("%d%d%d%d",&d,&m,&y,&q);
       int c=0;
       n=q-y;
       for(int j=y;j<=q;j++)
       {
        if(d==29 && m==2)
        {

        if(isLeapYear(j)==false)
        {
            n--;
        }
        }

        }
        printf("Case %d: %d\n",i,n);
       }

    }

    return 0;
}
