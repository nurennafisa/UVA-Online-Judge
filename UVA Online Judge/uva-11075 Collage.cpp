#include<bits/stdc++.h>
using namespace std;
 map<char,int>mp;
  map<char,int>mp1;
 string s;
int main()
{
    int test,n,r,c,a;
    while(scanf("%d",&test)==1)
    {
        for(int i=1;i<=test;i++)
        {
            scanf("%d",&n);
            getchar();
            for(int j=1;j<=n;j++)
            {
                for(int k=1;k<=5;k++)
                {
                    cin>>s;


                    for(int l=0;l<s.size();l++)
           {
         if(s[l]!='.')
         {

        if(mp.count(s[l])==0)
        {
            mp[s[l]]=1;

        }
        else{mp[s[l]]=mp[s[l]]+1;
        }

       }
           }
       s.clear();

                }
                getchar();
            }


            scanf("%d%d",&r,&c);
            for(int g=1;g<=r;g++)
            {
                cin>>s;
                           for(int m=0;m<s.size();m++)
           {
            if(s[m]!='.')
            {


        if(mp1.count(s[m])==0)
        {
            mp1[s[m]]=1;

        }
        else{mp1[s[m]]=mp1[s[m]]+1;
        }

       }
           }
       s.clear();

            }
            getchar();
             map<char,int> :: iterator it;
              map<char,int> :: iterator it1;
               it1=mp1.begin();
              a=0;
             for(it=mp.begin();it!=mp.end();it++)
              {
                  if(it->second!=it1->second)
                  {
                      a++;
                  }
                  it1++;
              }
              //cout<<a<<endl;
              if(a==0)
              {
                  printf("Case %d: Yes\n",i);
              }
              else{
                 printf("Case %d: No\n",i);
              }

              s.clear();
              mp.clear();
              mp1.clear();










        }
    }

}
