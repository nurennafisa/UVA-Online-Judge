#include<bits/stdc++.h>
using namespace std;

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
   string s,s1,s2;
   int f,test,f1;
   bool r1,r2;
   scanf("%d",&test);
   getchar();
   for(int k=1;k<=test;k++)
   {
       f=0;
       f1=0;
       cin>>s;
       for(int i=0;i<s.size();i++)
       {
           s1+=s[i];
           if(IsPalindrome(s1)==true)
           {
               for(int j=i+1;j<s.size();j++)
               {
                   s2+=s[j];
               }
               if(IsPalindrome(s2)==true)
           {
               f=1;
               break;

           }
           }
           //s1.clear();
           s2.clear();
       }
       if(f==1)
       {
           printf("alindrome\n");
       }
       else
       {
           if(IsPalindrome(s)==true)
           {
               printf("palindrome\n");
           }
           else
           {
               printf("simple\n");
           }
       }
       s.clear();
        s1.clear();
           s2.clear();
   }
}
