#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,n,sum,sum1,sum2,d1,d2,Min;
    string s1,s2;
    while(scanf("%d",&test)==1)
    {
        for(int j=1;j<=test;j++)
        {
          cin>>n;
          cin>>s1;
          cin>>s2;
          if(s1==s2)
          {
              printf("Case %d: 0\n",j);

          }
          else
          {
                sum=0;

              for(int i=0;i<n;i++)
              {

              sum1=s1[i]-48;
              sum2=s2[i]-48;
              d1=abs(sum1-sum2);
              d2=10-abs(sum1-sum2);


                  sum=sum+min(d1,d2);

              }

          printf("Case %d: %d\n",j,sum);
        }


           s1.clear();
          s2.clear();
        }
        }
        return 0;

        }
