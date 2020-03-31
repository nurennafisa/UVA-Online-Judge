#include <bits/stdc++.h>
using namespace std;

int main()
{
   int test,i,j,g,Max,c;
   string s,s1;

   while(scanf("%d",&g)==1)
   {
       if(g==0)
       {
           break;
       }
     cin>>s;

g=s.size()/g;
c=0;
for(int i=0;i<s.size();i++)
{
    c++;
    s1+=s[i];
    if(c==g)
    {
        reverse(s1.begin(),s1.end());
        cout<<s1;
        s1.clear();
        c=0;
    }
}
cout<<endl;

      s1.clear();
      s.clear();



   }
}
