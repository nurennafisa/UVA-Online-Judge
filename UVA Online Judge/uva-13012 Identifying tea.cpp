#include<bits/stdc++.h>
using namespace std;
int main()
{

   int b,a,c,d,e,n;
    while(scanf("%d",&n)==1)
    {
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
        vector<int>v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        v.push_back(d);
        v.push_back(e);
        int r=count(v.begin(),v.end(),n);
        cout<<r<<endl;
        v.clear();

    }
}
