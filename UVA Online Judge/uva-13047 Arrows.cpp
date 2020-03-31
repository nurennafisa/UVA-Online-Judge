#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  int test,sum,Max;
  while(scanf("%d",&test)==1)
  {
      for(int j=1;j<=test;j++)
      {
          cin>>s;
          sum=0;
          Max=-1;
          for(int i=0;i<s.size();i++)
          {

                      if(s[i]=='=')
                      {
                           sum++;
                           i++;

                      while(s[i]=='=')
                      {
                          sum++;
                          i++;
                      }
                      if(s[i]=='>')
                          {

                        sum++;
                          if(Max<sum)
                          {
                              Max=sum;
                              sum=0;
                          }
                          }
                      }


                      if(s[i]=='-')
                      {
                           sum++;
                           i++;

                      while(s[i]=='-')
                      {
                          sum++;

                           i++;
                      }
                      if(s[i]=='>')
                          {
                              sum++;
                          if(Max<sum)
                          {
                              Max=sum;
                              sum=0;
                          }
                          }
                      }


                      if(s[i]=='=')
                      {
                           sum++;
                           i++;
                           while(s[i]=='=')
                           {
                            sum++;
                           i++;
                      }

                      if(s[i]=='>' || s[i]== '-')
                      {

                          if(Max<sum)
                          {
                              Max=sum;
                              sum=0;
                          }
                      }
              }

                 if(s[i]=='-')
                      {
                           sum++;
                           i++;
                           while(s[i]='-')
                           {
                               sum++;
                                 i++;

                           }
                           if(s[i]=='>' || s[i]== '-')
                      {

                          if(Max<sum)
                          {
                              Max=sum;
                              sum=0;
                          }
                      }

                      }
          }

          cout<<Max<<endl;
          s.clear();

      }


          }

  return 0;

 }

