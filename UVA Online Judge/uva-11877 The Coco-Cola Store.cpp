#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum,s;

    while(scanf("%d",&s)==1)
    {

          if(s==0)
          {
              break;
          }

            sum=0;

            for(int j=3;s>=3;j=j+3)
        {


                    sum++;
                    s=s-3;
                    s++;
                   if(s==2)
                   {
                       s++;
                   }

                }





            printf("%d\n",sum);
        }





}



