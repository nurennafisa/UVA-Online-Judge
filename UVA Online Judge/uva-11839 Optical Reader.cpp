#include<bits/stdc++.h>
using namespace std;

int main()
{
    int coun,test,a,b,c,d,e;
    char r,A,B,C,D,E;
    map<char,int>visit;
    while(scanf("%d",&test)==1)
    {
        for(int i=1;i<=test;i++)
        {

        scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

            visit[A]=a;

            visit[B]=b;

            visit[C]=c;
            visit[D]=d;

            visit[E]=e;

                coun=0;
                 map<char,int>:: iterator it;
                for(it=visit.begin();it!=visit.end();it++)
                {
                    if(it->second>=127)
                    {
                        coun++;
                        r=it->first;;
                    }
                }
                if(coun==1)
                {
                    cout<<r<<endl;
                }
                else if(coun>1){
                    cout<<"*"<<endl;
                }
            visit.clear();


        }
    }










        return 0;

   }
