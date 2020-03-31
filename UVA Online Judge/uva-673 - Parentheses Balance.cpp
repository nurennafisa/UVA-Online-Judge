#include<bits/stdc++.h>
using namespace std;
int main()
{
int test,c;
 string s;
while(scanf("%d",&test)==1)
{

getchar();

    for(int i=1;i<=test;i++)
    {
        stack<char> st;
    getline(cin,s);

        for(int j=0;j<s.size();j++)
        {
    if (st.size()>0 && s[j]==')'&& st.top()=='(')

              {
                st.pop();

              }
            else if(st.size()>0 && s[j]==']'&& st.top()=='[')
            {
                st.pop();

            }

            else{
                st.push(s[j]);
            }
        }

        if(st.size() == 0)
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        s.clear();
    }
}
return 0;
}
