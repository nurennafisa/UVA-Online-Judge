#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,d,e;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        for(int i=1;i<=n;i++)
        {
            scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
            if(a<=127 && b>=127 && c>127 && d>127 && e>127 )
            {
                printf("A\n");
            }
            else if(b<=127  && a>127 && c>127 && d>127 && e>127    )
            {
                printf("B\n");
            }

             else if(c<=127  && b>127 && a>127 && d>127 && e>127 )
            {
                printf("C\n");
            }
             else if(d<=127   && b>127 && c>127 && a>127 && e>127)
            {
                printf("D\n");
            }
             else if(e<=127  && b>127 && c>127 && d>127 && a>127)
            {
                printf("E\n");
            }
            else{
                 printf("*\n");
            }
            a=0;
            b=0;
            c=0;
            d=0;
            e=0;

        }
    }
}
