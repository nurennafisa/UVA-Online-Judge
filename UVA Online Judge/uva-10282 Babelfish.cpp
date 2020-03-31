#include<bits/stdc++.h>
using namespace std;
int main()
{
  char s1[100],a[100],b[100],s[100];

  map<string,string>mp;

   while(gets(s1))
   {
       if(s1[0]=='\0')
       {
           break;
       }
      sscanf(s1,"%s%s",a,b);
      mp[b]=a;
}
while(gets(s))
{

   if(mp.find(s)!=mp.end())
   {
       cout<<mp[s]<<endl;
   }
   else{
    cout<<"eh"<<endl;
   }

}
mp.clear();
}



