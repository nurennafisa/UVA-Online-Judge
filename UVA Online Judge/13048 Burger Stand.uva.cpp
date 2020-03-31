#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int test;
    long long int c;
scanf("%d",&test);
for(int i=1;i<=test;i++)
{
     cin>>s;
    for(int j=0;j<s.size();j++)
    {
        if(s[j]=='D')
        {
            s[j]='0';
        }
        if(s[j]=='B')
        {
            if(j!=0)
            {
                  s[j-1]='0';
                  s[j-2]='0';
            }
            s[j]='0';


        }
        if(s[j]=='S')
        {

            if(j!=0)
            {
                s[j-1]='0';
            }

            s[j]='0';
            if(j!=s.length()-1)
            {
                  s[j+1]='0';
            }



        }
    }
    c=0;
    for(int j=0;j<s.size();j++)
    {
        if(s[j]!='0')
        {
            c++;
        }
    }
    printf("Case %d: %lld\n",i,c);
    s.clear();
}



    return 0;
}
