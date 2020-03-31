#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,x;
    string s;
    vector < pair< string,int > >v;
    while(scanf("%d",&test)==1)
    {
        for(int i=1;i<=test;i++)
        {
            for(int j=0;j<10;j++)
            {
                cin>>s;
                cin>>x;
                v.push_back(make_pair(s,x));
            }
            int mx=-1;
            for(int i=0;i<10;i++)
            {
                if(v[i].second>mx)
                {
                    mx=v[i].second;
                }
            }
            cout<<"Case #"<<i<<":"<<endl;
            for(int i=0;i<10;i++)
            {
                if(v[i].second==mx)
                {
                    cout<<v[i].first<<endl;
                }
            }
            v.clear();
            s.clear();

        }


    }





    return 0;
}

