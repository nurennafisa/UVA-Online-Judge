#include<bits/stdc++.h>
using namespace std;
  string s,s1,s2,s3;
  vector<string>v;
    map<string,string>mp;
int main()
{
    int test,n,i;

    while(scanf("%d",&test)==1)
    {
        for( i=1;i<=test;i++)
        {
            scanf("%d",&n);
            for(int i=0;i<n;i++)
            {
               cin>>s;
               v.push_back(s);

                 s1=s;//assign string

               sort(s1.begin(),s1.end());
                 mp[s]=s1;
                 s1.clear();
            }


           while(cin>>s2)
           {
               if(s2=="END")
               {
                   break;
               }

             s3=s2;
               sort(s2.begin(),s2.end());
                cout<<"Anagrams for: "<<s3<<endl;

               int c=1;

               for(int j=0;j<v.size();j++)
               {
                   if(mp[v[j]]==s2)
                   {
                       cout<<"  "<<c<<") "<<v[j]<<endl;
                       c++;
                   }
               }
               if(c==1)
               {
                   cout<<"No anagrams for: "<<s3<<endl;;

               }


               s2.clear();
               s3.clear();


   }
   mp.clear();
   s.clear();
   s1.clear();
   v.clear();
if(i!=test)
{
    cout<<endl;
}

        }
    }


    return 0;
}
