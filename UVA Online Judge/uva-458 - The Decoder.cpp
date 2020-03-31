#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  int i=0;
  while(cin>>s)
  {
    for(int i=0;i<s.length();i++)
    {
        s[i]=s[i]-7;

    }
   cout<<s<<endl;

    s.clear();
  }

    return 0;
}
