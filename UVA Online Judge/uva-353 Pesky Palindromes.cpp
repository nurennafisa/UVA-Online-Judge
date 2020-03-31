#include<bits/stdc++.h>
using namespace std;
  set<string>st;
  set<string> :: iterator it;
  int len;
void substring(string s)
{
     string ss;

   for(int i=0;i<s.size();i++)
   {
       for(int j=0;j<s.size();j++)
   {

       ss=s.substr(i,j);
       st.insert(ss);
   }
   }
}
bool IsPalindrome(const string& str)
{
if(str=="")
       {
           return false;
       }

    int l; //Hold length of string

    //finding length of string
    for(l = 0; str[l] != '\0'; l++);

    //Comparing first element with last element till middle of string
    int i;
    for(i = 0; (i < l/2) && (str[i] == str[l - i - 1]); i++);

    if(i == l/2)
    {

       return true;
    }
    else
        return false;


}

int main()
{

  string s;
  while(cin>>s)
  {

      substring(s);
      int c=0;
       for(it=st.begin();it!=st.end();it++)
   {

          if(IsPalindrome(*it)==true)
          {
              c++;
          }

   }
   if(IsPalindrome(s)==true)
   {
       c++;
   }
   cout<<"The string '"<<s<<"' contains "<<c<<" palindromes."<<endl;
   s.clear();
   st.clear();

  }












return 0;

   }
