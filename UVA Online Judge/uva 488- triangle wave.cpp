#include<bits/stdc++.h>
using namespace std;
 int main()
 {
  int test,a,f,i;
  while(scanf("%d",&test)==1)
  {
      for(int m=1;m<=test;m++)
      {

      scanf("%d",&a);
      scanf("%d",&f);
      for( i=1;i<=f;i++)
      {
          for(int j=1;j<=a;j++)
          {
              for(int k=1;k<=j;k++)
              {
                  printf("%d",j);
              }
              printf("\n");
          }
          for(int j=a-1;j>=1;j--)
          {
              for(int k=j;k>=1;k--)
              {
                  printf("%d",j);
              }
              printf("\n");
          }
                if(i!=f)
                {

              printf("\n");
                  }
      }
            if(m != test)
  {
            printf("\n");
  }

  }


  }

     return 0;
 }
