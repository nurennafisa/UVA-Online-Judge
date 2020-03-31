#include <bits/stdc++.h>
using namespace std;
string rev(string rs)
{
    reverse(rs.begin(), rs.end());
    return rs;
}
string add (string s1, string s2)
{
    int carry= 0 ,x , y , sum = 0 , k = 0;
    string cc;
    if(s1.length() < s2.length())
    {
        swap(s1, s2);
    }

    string s = "";

    for(int i = 0; i < s1.length(); i++)
    {
        if(i < s2.length())
        {
            x = s1[i] - 48;
            y = s2[i] - 48;
            sum = x + y + carry;
            k = sum % 10;
            s += k + '0';

            carry = 0;

            if(sum > 9)
                carry = 1;
            if(carry == 1 && i == s1.length() - 1)
            {
                s +=  '1';
            }
        }
        else
        {
            x = s1[i] - 48;
            sum = carry + x;
            k = sum % 10;
            s += k + '0';

            carry = 0;

            if(sum > 9)
                carry = 1;
            if(carry == 1 && i == s1.length() - 1)
            {
                s += '1';
            }

        }
    }
    return s;
}

int main()
{
    string sum = "0", s3, s4;

    while(cin >> s3)
    {
        if(s3 == "0")
            break;
        s4 = rev(s3);
        sum = add(s4, sum);

    }
    cout<<rev(sum)<< endl;



}
