#include <bits/stdc++.h>

using namespace std;
int main()
{  int test,q;
  scanf("%d",&test);
  getchar();
  map <string,string > mp;
  string s,s1,s2;
  for(int i=0;i<test;i++)
  {
      getline(cin,s);
      getline(cin,s1);
      mp[s]=s1;
  }

    scanf("%d",&q);
    getchar();
    for(int i=0;i<q;i++)
    {
        getline(cin,s2);
        cout<<mp[s2]<<endl;
    }
    s.clear();
    s1.clear();
    s2.clear();
    mp.clear();














          return 0;
}

