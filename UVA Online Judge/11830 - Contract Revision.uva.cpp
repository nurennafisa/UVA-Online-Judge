#include<bits/stdc++.h>
using namespace std;
int main()
{
  int j,d,c,m;
  string s;
  while(scanf("%d",&d)==1)
  {
      cin>>s;
      if(d==0 && s=="0")
      {
          break;
      }
         c=0;
         m=0;
        for(int i=0;i<s.length();i++)
        {

             j=s[i]-'0';

             if(j!=d && j!=0)
            {     c++;
                cout<<j;

            }
            if(j==0)
            {
                m++;
            }
        }
        if(c==0)
        {
            cout<<"0";
        }
        else if(m>0)
        {
            cout<<"0";
        }

      cout<<endl;
      s.clear();
  }



    return 0;
}

