#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int test,t1,t2,f,a,c,sum;
    while(scanf("%d",&test)==1)
    {
        for(int i=1;i<=test;i++)
        {
            scanf("%d%d%d%d",&t1,&t2,&f,&a);

        sum=t1+t2+f+a;
        for(int i=1;i<=3;i++)
        {
            scanf("%d",&c);
            v.push_back(c);
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        c=v[0]+v[1];
        c=c/2;
        sum=sum+c;
        if(sum>=90 && sum<=100)
        {
               printf("Case %d: A\n",i);

        }
        else if(sum>=80 && sum<=89)
        {
               printf("Case %d: B\n",i);

        }
        else if(sum>=70 && sum<=79)
        {
               printf("Case %d: C\n",i);

        }
        else if(sum>=60 && sum<=69)
        {
               printf("Case %d: D\n",i);

        }
        else{
            printf("Case %d: F\n",i);
        }
        v.clear();
    }
}
}
