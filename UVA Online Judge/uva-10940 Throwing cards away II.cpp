#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,u;

    deque<int>d;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        for(int i=1;i<=n;i++)
        {
            d.push_back(i);
        }
        while(d.size()>=2)
        {
            if(d.size()!=0)
            d.pop_front();
            u=d.front();
              if(d.size()!=0)
            d.pop_front();
           d.push_back(u);
        }
    printf("%lld\n",u);
       d.clear();

    }
}

