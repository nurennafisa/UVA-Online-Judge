#include <bits/stdc++.h>
using namespace std;

int main()
{
   int test,num;
   string s1;

   while(scanf("%d",&test)==1)
   {
       getchar();

       for(int i=1;i<=test;i++)
       {
       getline(cin,s1);
       num=0;
       for(int j=0;j<s1.size();j++)
       {

 if(s1[j]=='a' || s1[j]=='d' || s1[j]=='g' || s1[j]=='j' || s1[j]=='m' ||s1[j]=='p' ||s1[j]=='t'||s1[j]=='w'||s1[j]==' ')
          {
              num++;
          }

else if(s1[j]=='b' || s1[j]=='e' || s1[j]=='h' || s1[j]=='k' || s1[j]=='n' ||s1[j]=='q' ||s1[j]=='u'||s1[j]=='x')
          {
              num=num+2;
          }
 else if(s1[j]=='c' || s1[j]=='f' || s1[j]=='i' || s1[j]=='l' || s1[j]=='o' ||s1[j]=='r' ||s1[j]=='v'|| s1[j]=='y')
          {
              num=num+3;
          }

     else if( s1[j]=='s' || s1[j]=='z')
          {
              num=num+4;
          }

       }
       printf("Case #%d: %d\n",i,num);
       s1.clear();
       }
   }
   return 0;
}








