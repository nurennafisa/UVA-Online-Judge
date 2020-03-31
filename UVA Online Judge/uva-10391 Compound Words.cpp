#include<bits/stdc++.h>
using namespace std;
int k=0;
int main()
{
   string s,ss;
   set<string>st;
   vector<string>v[100000];
   vector<string>v1;
      while(cin>>s)
   {

   for(int i=0;i<s.size();i++)
   {
       for(int j=0;j<s.size();j++)
   {

       ss=s.substr(i,j);
       st.insert(ss);

   }
   }
    set<string> :: iterator it;
    for(it=st.begin();it!=st.end();it++)
   {
       v[k].push_back(*it);

   }
   k++;
   s.clear();
   st.clear();
   ss.clear();
     int c=0;
   for(int i=0;i<k;i++)
   {

       for(int j=0;i<v[i].size();j++)
       {
           if(v[i][j]==v[i++][j])
           {
               v1.push_back(v[i][j]);
               c++;
           }
       }
       if(c==2)
       {
           for(int i=0;i<v1.size();i++)
           {
               cout<<v1[i];
           }
       }
       cout<<endl;
       v1.clear();
         for(int j=0;i<v[i].size();j++)
       { v[i].clear();
       }

   }

   }


return 0;

   }








