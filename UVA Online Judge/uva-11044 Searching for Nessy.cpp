#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,c;
    while(scanf("%d",&n)==1)
    {
        for(int i=1;i<=n;i++)
        {
            scanf("%d%d",&r,&c);
            cout<<(r/3)*(c/3)<<endl;
        }
    }
}
