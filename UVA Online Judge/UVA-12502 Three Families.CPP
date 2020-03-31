#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    int r,x,y,z,ans;
    scanf("%d",&test);
    for(int i=1;i<=test;i++)
    {
        scanf("%d%d%d",&x,&y,&z);

        ans=(z*(x+x-y))/(x+y);


        printf("%d\n",ans);
    }
}

