#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r,s;
    string s1,s2,s3,s4;
    map<int,char> mp;
    while(getline(cin,s1)&& getline(cin,s2))
    {
       for(int i=0;i<s1.length();i++)
       {
           if((s1[i]>='A'&& s1[i]<='Z') || (s1[i]>='a'&& s1[i]<='z'))
           {
               s3+=s1[i];
               if(s3[i]>='a'&& s3[i]<='z')
               {
               s3[i]=s3[i]+32;
               }
           }
       }
       for(int i=0;i<s2.length();i++)
       {
           if((s2[i]>='A'&& s2[i]<='Z') || (s2[i]>='a'&& s2[i]<='z'))
           {
               s4+=s2[i];
               if(s4[i]>='a'&& s4[i]<='z')
               {

               s4[i]=s4[i]+32;
               }
           }
       }
    int i=1;
  for(char j='A'; j<='Z'; j++)
        {
            mp[i]=j;
            i++;
        }
        int sum=0;
        for(int j=1; j<=26; j++)
            {
              for(int i=0;i<s3.length();i++)
              {
                  if(s[i]==mp[j])
                  {
                      sum=sum+j;
                  }
              }
            }
            s=0;
            while(sum>0)
            {
               r=sum%10;
               s=s+r;
               sum=sum/10;
            }
            cout<<s;

       s1.clear();
       s2.clear();
       s3.clear();
       s4.clear();
       mp.clear();

    }












       return 0;
}
