#include<bits/stdc++.h>
using namespace std;
int main()
{
 int test,l,w,h;
while(scanf("%d",&test)==1)
{
    for(int i=1;i<=test;i++)
    {
    scanf("%d%d%d",&l,&w,&h);
    if(l<=20 && w<=20 && h<=20)
    {
        printf("Case %d: good\n",i);
    }
    else
    {
        printf("Case %d: bad\n",i);
    }
}
}
    return 0;
}
