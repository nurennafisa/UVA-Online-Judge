#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    int c,f,c1;
    while(getline(cin,s1))
    {     c1=0;
        for( int i=0;i<s1.size()-1;i++)
        {
             if((s1[i]>='A'&& s1[i]<='Z') || (s1[i]>='a'&& s1[i]<='z'))
           {
               s+=s1[i];

           }
           else if(s1[i]==32)
            {
                c1++;
               s+=s1[i];

           }
        }
        if(s1[s1.size()-1]=='\n')
        {
            c1++;
            s+=s1[s1.size()-1];
        }
        cout<<s;
        cout<<endl<<c1<<endl;


        c=0;
        f=0;
        for( int i=0;i<s.size();i++)
        {
           if((s[i]>='A'&& s[i]<='Z') || (s[i]>='a'&& s[i]<='z') || s[i]=='\n')
           {
               f=1;
           }
           else{
            c++;
           }


        }



        cout<<c<<endl;
        s.clear();
        s1.clear();



    }

    return 0;
}

