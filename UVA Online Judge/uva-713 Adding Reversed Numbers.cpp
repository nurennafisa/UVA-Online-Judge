#include<bits/stdc++.h>
using namespace std;
string rev (string rs)
{
    reverse(rs.begin(), rs.end());
    return rs;
}
string add (string s1 , string s2)
{
    int carry = 0, x , y, sum = 0 , k = 0;
    string s = "";
    if(s1.length() < s2.length())
        swap(s1, s2);


    for(int i = 0; i < s1.length(); i++)
    {
        if(i < s2.length())
        {
            x = s1[i] - 48;
            y = s2[i] - 48;
            sum = carry + x + y;
            k = sum % 10;
            s += k + '0';
            carry = 0;

            if(sum > 9) carry = 1;
            if(carry == 1 && i == s1.length() - 1)
                s += '1';
        }
        else
        {
            x = s1[i] - 48;
            sum = x + carry;
            k = sum % 10;
            s += k + '0';
            carry = 0;
            if(sum > 9) carry = 1;
            if(carry == 1 && i == s1.length() - 1)
                s += '1';

        }

    }
    return s;
}
int main()
{
    string s1,s2,s3;

   int test;
   while(scanf("%d",&test)==1)
   {
       getchar();
       for(int i=1;i<=test;i++)
       {
           cin>>s1>>s2;
           rev(s1);
           rev(s2);
        s3=add(s1,s2);
         while(s3[0] == '0')
        {
            s3.erase(s3.begin());
        }
        cout<<s3<<endl;
           s1.clear();
           s2.clear();
       }
   }










}
