#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<long long int>v;
   long long int n,a;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        for(int j=0;j<v.size()-1;j++)
        {
            cout<<v[j]<<" ";
        }
        cout<<v[v.size()-1]<<endl;
        v.clear();
    }
}
