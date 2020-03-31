#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g,i,r,j,c;
    j=0;
    while(scanf("%d",&g)==1)
    {
        j++;
        if(g<0)
        {
            break;
        }
        r=0;
        if(g==1)
        {
            printf("Case %d: 0\n",j);
            continue;
        }
        for( i=1;r<g;i++ )
        {
            r=pow(2,i);
            c=i;



        }




        printf("Case %d: %d\n",j,c);
        c=0;
        r=0;

    }
}
