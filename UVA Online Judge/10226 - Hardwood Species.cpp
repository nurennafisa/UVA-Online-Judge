#include<bits/stdc++.h>
using namespace std;

 map<string,double>mp;
            map<string,double> :: iterator it;
int main()
{
    int test;

    string s;
    double ans,c;
    scanf("%d",&test);
     getchar();
                getchar();



for(int i=1;i<=test;i++)
{


            c=0.0;
            while(getline(cin,s))
            {
           if(s.size()==0)
           {
               break;
           }
        mp[s]++;
                c++;

                s.clear();

            }

            for(it=mp.begin();it!=mp.end();it++)
            {
                ans=(100.0*it->second)/c;
                cout<< it->first;
                printf(" %.4lf\n",ans);
            }
            if(i!=test)
            {
                cout<< endl;
            }
            mp.clear();


        }
    }



