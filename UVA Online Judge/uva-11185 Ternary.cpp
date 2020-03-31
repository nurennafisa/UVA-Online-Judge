#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,q;
    vector<long long int>v;
    while(scanf("%lld",&n)==1)
    {
        if(n<0)
        {
            break;
        }
        if(n==0)
        {
            cout<<"0"<<endl;
            continue;
        }
        q=0;
        while(n>0)
        {
            q=n%3;
            n=n/3;
            v.push_back(q);
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i];
        }
        cout<<endl;
        v.clear();

    }
}
