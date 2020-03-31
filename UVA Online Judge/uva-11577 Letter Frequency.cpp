#include<bits/stdc++.h>
using namespace std;
int a[1000];
int main()
{
   string s;
   string s1;
   int test,r;
   while(scanf("%d",&test)==1)
   {
       getchar();
       for(int k=1;k<=test;k++)
       {
           memset(a,0,sizeof a);
           s.clear();

           getline(cin,s1);

    for(int l=0;l<s1.size();l++)
           {
              if(s1[l]>='A'&& s1[l]<='Z')
              {
                  s1[l]+=32;
              }
           }
           for(int i=0;i<s1.size();i++)
           {
              if(s1[i]>='a'&& s1[i]<='z')
              {
                  s+=s1[i];
              }
           }


           for(int j=0;j<s.size();j++)
           {
               a[s[j]]++;
           }
           int Max=0;
           for(int g=0;g<=122;g++)
           {
               if(a[g]>Max)
               {
                   Max=a[g];

               }
           }
            for(int m=0;m<=122;m++)
           {
               if(a[m]==Max)
               {
           printf("%c",m);
               }
           }
           cout<<endl;




       }
   }


    return 0;
}











