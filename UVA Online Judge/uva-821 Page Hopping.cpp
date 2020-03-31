#include <bits/stdc++.h>
#include <stdio.h>
int mat[105][105];
using namespace std;
#define INF 99999999
void build ()
{
    for(int i = 1; i <= 101; i++)
    {
        for(int j = 1; j <= 101; j++)
        {
            if(i == j)
            {
                mat[i][j] = 0;
                continue;
            }
            mat[i][j] = INF;
        }
    }
}
void floyd (int n)
{
    for(int k = 1; k <= n; k++)
    {
        for(int i = 1; i <= n; i++)
        {
            for(int j =  1; j <= n; j++)
            {
                 mat[i][j] = min(mat[i][j], mat[i][k] + mat[k][j]);
            }
        }
    }
}
int main()
{

    int c,a,b;
    double r,e;
     int Max,sum;


c=0;
  while(1)
    {
         build();


       e=0;
        Max=-1;
            cin>>a>>b;


        if(a==0 && b==0)
        {
            break;
        }
        else
        {


            mat[a][b] = 1;
       if(a>Max)
       {
           Max=a;
       }
        if(b>Max)
       {
           Max=b;
       }

    while(cin >>a>>b)
    {

     if(a==0 && b==0)
       {
           break;
       }


       mat[a][b] = 1;
       if(a>Max)
       {
           Max=a;
       }
        if(b>Max)
       {
           Max=b;
       }
    }



    floyd(Max);
sum=0;
    for(int i = 1; i <= Max; i++)
    {
        for(int j = 1; j <= Max; j++)
        {
            if(mat[i][j] == INF)
            {

                continue;
            }
        sum=sum+mat[i][j];
        if(mat[i][j]!=0)
        e++;

        }

    }


c++;

    printf("Case %d: average length between pages = %.3lf clicks\n",c,sum/e);




}
    }
}


/*
 3 4
 1 2 1
 2 3 2
 1 3 6
 3 1 5
*/
