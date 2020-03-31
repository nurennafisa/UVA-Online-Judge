#include <bits/stdc++.h>
using namespace std;
int k[1000];
int n[1000];
int main()
{
   int test,l;

   while(scanf("%d",&test)==1)
   {
       memset(k,0,sizeof k);
       memset(n,0,sizeof n);
       for(int i=1;i<=test;i++)
       {
       scanf("%d",&l);
       for(int j=0;j<l;j++)
       {
           scanf("%d",&k[j]);
       }
        for(int m=0;m<l;m++)
       {
           scanf("%d",&n[m]);
       }
       for(int b=0;b<l;b++)
       {
           if(k[b]==0)
           {
               cout<<" ";

           }

      if(k[b]==1)
      {
          if(n[b]==1)
          {
              cout<<".";
          }
          if(n[b]==2)
          {
              cout<<",";
          }
          if(n[b]==3)
          {
              cout<<"?";
          }
          if(n[b]==4)
          {
              printf("%c",34);
          }
      }
       if(k[b]==2)
      {
          if(n[b]==1)
          {
              cout<<"a";
          }
          if(n[b]==2)
          {
              cout<<"b";
          }
          if(n[b]==3)
          {
              cout<<"c";
          }

       }
        if(k[b]==3)
      {
          if(n[b]==1)
          {
              cout<<"d";
          }
          if(n[b]==2)
          {
              cout<<"e";
          }
          if(n[b]==3)
          {
              cout<<"f";
          }


       }
       if(k[b]==4)
      {
          if(n[b]==1)
          {
              cout<<"g";
          }
          if(n[b]==2)
          {
              cout<<"h";
          }
          if(n[b]==3)
          {
              cout<<"i";
          }

       }
        if(k[b]==5)
      {
          if(n[b]==1)
          {
              cout<<"j";
          }
          if(n[b]==2)
          {
              cout<<"k";
          }
          if(n[b]==3)
          {
              cout<<"l";
          }

       }
        if(k[b]==6)
      {
          if(n[b]==1)
          {
              cout<<"m";
          }
          if(n[b]==2)
          {
              cout<<"n";
          }
          if(n[b]==3)
          {
              cout<<"o";
          }

       }
         if(k[b]==7)
      {
          if(n[b]==1)
          {
              cout<<"p";
          }
          if(n[b]==2)
          {
              cout<<"q";
          }
          if(n[b]==3)
          {
              cout<<"r";
          }
          if(n[b]==4)
          {
              cout<<"s";
          }

       }    if(k[b]==8)
      {
          if(n[b]==1)
          {
              cout<<"t";
          }
          if(n[b]==2)
          {
              cout<<"u";
          }
          if(n[b]==3)
          {
              cout<<"v";
          }

      }
        if(k[b]==9)
      {
          if(n[b]==1)
          {
              cout<<"w";
          }
          if(n[b]==2)
          {
              cout<<"x";
          }
          if(n[b]==3)
          {
              cout<<"y";
          }
          if(n[b]==4)
          {
              cout<<"z";
          }

       }

       }
       printf("\n");


   }
   }

   return 0;
}
