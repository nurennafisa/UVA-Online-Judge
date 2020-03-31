#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    int n,c;
    while(scanf("%d",&n)==1)
    {

        for(int i=1;i<=n;i++)
        {
            cin>>s1>>s2;
            c=0;
            if(s1.size()==s2.size())
            {
                for(int i=0;i<s1.size();i++)
                {
                    if(s1[i]=='a' || s1[i]=='e' ||s1[i]=='i' ||s1[i]=='o' ||s1[i]=='u' )
                    {
                         if(s2[i]=='a' || s2[i]=='e' ||s2[i]=='i' ||s2[i]=='o' ||s2[i]=='u' )
                    {
                        c++;

                    }
                    }
                    else if(s1[i]==s2[i])
                    {
                        c++;
                    }

                }

            }
             if(c==s1.size() && c==s2.size())
                {
                    cout<<"Yes"<<endl;
                }
                else{
                    cout<<"No"<<endl;
                }
                s1.clear();
                s2.clear();
        }

    }
}
