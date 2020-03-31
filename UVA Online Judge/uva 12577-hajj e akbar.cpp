#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  int i=0;
  while(cin>>s)
  {
      i++;
      if(s=="*")
      {
          break;
      }
      if(s=="Hajj")
      {
          cout<<"Case "<<i<<":"<<" Hajj-e-Akbar"<<endl;
      }
      else
      {
          cout<<"Case "<<i<<":"<<" Hajj-e-Asghar"<<endl;
      }
      s.clear();
  }

    return 0;
}
