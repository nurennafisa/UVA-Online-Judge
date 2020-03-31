#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    string s,s1;
    map<char,int>mp;
     map<int,char>mp1;
    set<int>st;
    vector<int>v;
    char r;

       while( cin>>s1)
       {
           for(int k=0;k<s1.size();k++)
         {
             if((s1[k]>='A' && s1[k]<='Z') || (s1[k]>='a' && s1[k]<='z'))
             {
                 s+=s1[k];
             }
         }
           for(int i=0;i<s.size();i++)
           {

        if(mp.count(s[i])==0)
        {
            mp[s[i]]=1;
            st.insert(x);
        }
        else{mp[s[i]]=mp[s[i]]+1;
        }

       }

  map<char,int> :: iterator it;
  map<int,char> :: iterator it1;

    for(it=mp.begin();it!=mp.end();it++)
    {
       mp1[it->second]=it->first;
    }
    for(it1=mp1.begin();it1!=mp1.end();it1++)
    {
         printf("%d %d\n",it1->second,it1->first);

    }


    mp.clear();
     mp1.clear();
    st.clear();

      cout<<endl;



       }


    return 0;
}


