#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum,s,e,c;

    while(scanf("%d",&s)==1)
    {
        if(s==0)
        {
            printf("0\n");
            continue;
        }

         sum=s;

      if((sum+1)%3==0 )
      {
          s++;

      }
     else if((sum+3)%3==0 )
      {
          s=s+3;

      }
     else if((sum+2)%3==0 )
      {
          s=s+2;

      }
      e=s/3;
      sum=sum+e;


            for(int j=3;e>=3;j=j+3)
        {


                    sum++;
                    e=e-3;
                    e++;

                }



            printf("%d\n",sum);

        }





}




