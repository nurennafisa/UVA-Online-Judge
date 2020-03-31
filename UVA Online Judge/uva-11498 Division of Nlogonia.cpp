#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,x,y,dx,dy;
    while(scanf("%d",&q)==1)
    {
        if(q==0)
        {
            break;
        }
        scanf("%d%d",&dx,&dy);
        for(int i=1;i<=q;i++)
        {
            scanf("%d%d",&x,&y);
            if(x==dx || y==dy)
            {
            printf("divisa\n");
            }
            else if(x>=dx && y>=dy)
            {
                printf("NE\n");
            }
             else if(x<dx && y>=dy)
            {
                printf("NO\n");
            }
             else if(x<dx && y<dy)
            {
                printf("SO\n");
            }
             else if(x>dx && y<dy)
            {
                printf("SE\n");
            }
        }
    }
}
