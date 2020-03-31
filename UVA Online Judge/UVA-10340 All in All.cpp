#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;

   while(cin>>s1>>s2)
   {
      int c=0;
      int i,j=0;
      for(i=0;i<s1.size();i++)
      {
          for(;j<s2.size();j++)
          {
              if(s2[j]==s1[i])
              {
                  c++;
                  j++;
                  break;
              }
          }


      }
      if(c==s1.size())
      {
          cout<<"Yes"<<endl;
      }
      else
      {
            cout<<"No"<<endl;
      }

  s1.clear();
  s2.clear();



   }


    return 0;
}
