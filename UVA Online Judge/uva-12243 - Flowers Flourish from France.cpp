#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int c,c1;
    while(getline(cin,s))
    {
        if(s=="*")
        {
            break;
        }
        c=0;
        c1=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==32)
            {
                c++;
                if(s[i+1]==s[0] || s[i+1]==s[0]+32 || s[i+1]==s[0]-32)
                {
                    c1++;
                }
            }


        }
        if(c1==c)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
        s.clear();
    }


    return 0;
}
