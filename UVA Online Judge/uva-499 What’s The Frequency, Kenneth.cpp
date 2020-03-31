#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;

    map<char,int>mp;
    set<int>st;
   while(getline(cin,s))
    {
        sort(s.begin(),s.end());

        for(int i=0;i<s.size();i++)
        {

         if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
        if(mp.count(s[i])==0)
        {
            mp[s[i]]=1;
            st.insert(s[i]);
        }
        else{mp[s[i]]=mp[s[i]]+1;
        }

    }

    map<char,int>::iterator it;
    int Max=0;
    for(it=mp.begin();it!=mp.end();it++)
    {
        if(it->second>Max)
        {
            Max=it->second;

        }
    }  for(it=mp.begin();it!=mp.end();it++)
    {
        if(it->second==Max)
        {
            cout<<it->first;

        }

    }
    cout<<" "<<Max<<endl;


    mp.clear();
    st.clear();
    s.clear();
    }


    return 0;
}

