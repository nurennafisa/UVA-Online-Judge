#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int>mp;
    for(char ch='A';ch<='C';ch++)
    {
        mp[ch]=2;
    }
    for(char ch='D';ch<='F';ch++)
    {
        mp[ch]=3;
    }
    for(char ch='G';ch<='I';ch++)
    {
        mp[ch]=4;
    }
        for(char ch='J';ch<='L';ch++)
    {
        mp[ch]=5;
    }
    for(char ch='M';ch<='O';ch++)
    {
        mp[ch]=6;
    }
    for(char ch='P';ch<='S';ch++)
    {
        mp[ch]=7;
    }
    for(char ch='T';ch<='V';ch++)
    {
        mp[ch]=8;
    }
    for(char ch='W';ch<='Z';ch++)
    {
        mp[ch]=9;
    }
    string s;
    while(cin>>s)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1' || s[i]=='-')
            {
                cout<<s[i];

            }
            else
            {
                cout<<mp[s[i]];

            }
        }
        cout<<endl;
        s.clear();
    }

}
