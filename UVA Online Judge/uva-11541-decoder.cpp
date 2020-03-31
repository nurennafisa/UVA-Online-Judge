#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,n,j,k,m;
    char x;
    string s;
    vector<pair<char,int> > v;
    scanf("%d",&test);
        for( j=1;j<=test;j++)
        {
            v.clear();
            s.clear();
            cin>>s;
            cout<<"Case "<<j<<": ";
            for(int i=0;i<s.length();i++)
            {
                if(s[i]>='A'&& s[i]<='Z')
                {
                    x=s[i];

                }

                n=0;
                  k=i;
                while(s[k+1]>='0'&& s[k+1]<='9')
                {
                    if(s[k+1]>='A'&& s[k+1]<='Z')
                    {
                        break;
                    }
                    n=n*10+s[k+1]-48;
                    k++;

                }

                v.push_back(make_pair(x,n));

            }
                       for(int i=0;i<v.size();i++)
                       {
                           for(int j=1;j<=v[i].second;j++)
                           {
                               cout<<v[i].first;
                           }
                       }

                     cout<<endl;

        }

     return 0;
}
