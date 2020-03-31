#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,q;
    string s,s1;
    vector<int>v,v1;
   while(getline(cin,s))
   {
       for(int i=0;i<s.size();i++)
       {

      int x=s[i];
      while(x>0)
      {
          q=x%10;
            v.push_back(q);
            x=x/10;
      }
       reverse(v.begin(),v.end());


       }

      reverse(v.begin(),v.end());
       for(int j=0;j<v.size();j++)
       {
           cout<<v[j];
       }
       v.clear();
       s.clear();
       s1.clear();

   }

    }
