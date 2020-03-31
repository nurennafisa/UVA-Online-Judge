#include<bits/stdc++.h>
using namespace std;
int a[105];
int main()
{
    int test,n,v,j,p;
    string s1,s2,s;
    scanf("%d",&test);
    for(int i=1;i<=test;i++)
    {
        scanf("%d",&n);
        getchar();
        for( j=1;j<=n;j++)
        {
            cin>>s;
            if(s[0]=='L')
            {
                a[j]=-1;
            }
           else  if(s[0]=='R')
            {
                a[j]=-2;
            }
             else
            {
                cin>>s>>v;
                a[j]=a[v];
               // printf(".......%d.....\n",a[j]);
            }
            s.clear();
        }
        p=0;
        for(int u=1;u<=j;u++)
        {
            if(a[u]==-1)
            {
                p=p-1;
            }
            else if(a[u]==-2)
            {
                p=p+1;
            }
        }
        printf("%d\n",p);
        memset(a,0,sizeof a);
    }

}
