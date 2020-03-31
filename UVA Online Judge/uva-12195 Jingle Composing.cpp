#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    map<char,double>mp;
    mp['W']=1.00;
    mp['H']=0.5;
    mp['Q']=0.25;
    mp['E']=0.125;
    mp['S']=0.0625;
    mp['T']=0.03125;
     mp['X']=0.015625;
    int c,pos;
    double sum;

    while(getline(cin,s))
    {
        if(s=="*")
        {
            break;
        }
        c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='/')
            {
                pos=i+1;
                sum=0.0;
                while(s[pos]!='/' && pos<s.size())
                {

                    sum=sum+mp[s[pos]];
                    pos++;

                }

                if(sum==1.0)
                {
                    c++;
                }

            }
        }


            cout<<c<<endl;
            s.clear();

        }


}
