#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    int test,t,pos1;
    while(scanf("%d",&test)==1)
    {
        getchar();
        for(int i=1;i<=test;i++)
        {
            getline(cin,s1);
            for(int n=0;n<s1.size();n++)
            {
                if(s1[n]=='B' || s1[n]=='S' || s1[n]=='D' || s1[n]=='-' )
                {
                    s+=s1[n];
                }
            }
            for(int j=0;j<s.size();j++)
            {
                pos1=j;
                if(s[pos1]=='B')

                {
                    s[pos1]='*';
                    if(pos1-1>=0  )
                    s[pos1-1]='*';
                    if(pos1-2>=0  )
                    s[pos1-2]='*';
                }
                else if(s[pos1]=='S')
                {
                    s[pos1]='*';
                    if(pos1-1>=0 )
                    s[pos1-1]='*';
                   if((pos1+1)<s.size() && s[pos1+1]!='S')
                    s[pos1+1]='*';
                }
               else if(s[pos1]=='D')
                {
                    s[pos1]='*';

                }

            }

            t=0;
             for(int k=0;k<s.size();k++)
            {
                if(s[k]!='*')
                {
                    t++;
                }

            }



            printf("Case %d: %d\n",i,t);
            s.clear();
            s1.clear();
        }
    }
}
