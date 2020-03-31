#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    int test,q;
    while(scanf("%d",&test)==1)
          {
              getchar();
              for(int i=1;i<=test;i++)
                {
                    cin>>s1;
                    cin>>q;
                    getchar();
                    for(int j=1;j<=q;j++)
                    {
                        cin>>s2;
                        s3=s1.substr(0,(s2.size()));//0 theke size-1 porjnto count korbe
                        if(s3==s2)
                        {
                            cout<<"y"<<endl;
                        }
                        else{
                              cout<<"n"<<endl;
                        }
                        s2.clear();
                        s3.clear();
                    }
                    s1.clear();
                }
          }
}
