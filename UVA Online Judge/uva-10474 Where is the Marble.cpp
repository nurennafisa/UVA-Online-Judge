#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<long long int>v;
    long long int n,q,c,test=0,m,pos;
    while(scanf("%lld%lld",&n,&q)==2)
    {
        if(n==0 && q==0)
        {
            break;
        }
        test++;
        for(int i=1;i<=n;i++)
        {
            scanf("%lld",&c);
            v.push_back(c);
        }
        sort(v.begin(),v.end());
          printf("CASE# %lld:\n",test);
        for(int i=0;i<q;i++)
        {
            scanf("%lld",&m);
            pos=-1;

            for(int k=0;k<n;k++)
            {

        if(v[k]==m)
        {
            pos=k;
            break;
        }


            }
            if(pos==-1)
            {
                printf("%lld not found\n",m);
            }
            else{
             printf("%lld found at %lld\n",m,pos+1);
            }

        }
        v.clear();
    }
}

