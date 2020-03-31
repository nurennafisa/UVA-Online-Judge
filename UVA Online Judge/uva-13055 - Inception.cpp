#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  string s,name;
  stack<string> v;
  while(scanf("%d",&n)==1)
  {
      getchar();
      for(int i=1;i<=n;i++)
      {
          getline(cin,s);
           if(s[0]=='S')
          {
      for(int j=6;j<s.size();j++)
              {
                  name+=s[j];
              }
              v.push(name);
                name.clear();
          }
          else if(s[0]=='K' && v.size()>0)
          {
            v.pop();

         }
         else if(s[0]=='T')
             {
                 if(v.size()==0)
                 {
                     printf("Not in a dream\n");
                 }
                 else{
                     cout<<v.top()<<endl;


                 }
                 s.clear();

             }

                      }

      }
return 0;
}




