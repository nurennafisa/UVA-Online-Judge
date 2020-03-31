#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b ,c, d, l,r,c1;
    while(scanf("%lld%lld%lld%lld%lld",&a,&b,&c,&d,&l)==5)
    {
        if(a==0 && b==0 && c==0 && d==0 && l==0)
        {
            break;
        }
        c1=0;
        for(int i=0;i<=l;i++)
        {
            r=(a*(i*i))+(b*i)+c;
            if(r%d==0)
            {
                c1++;
            }
        }
        cout<<c1<<endl;
    }
}
