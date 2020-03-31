#include <bits/stdc++.h>
#include <stdio.h>
int mat[101][101];
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
                 mat[i][j] = min(mat[i][j], max(mat[i][k] ,mat[k][j]));
            }
        }
    }
}
int main()
{

    int n, e,q,test=0;
    int x, y,sum,Min,f=0;

    while(cin >> n >> e>>q)
    {
        if(n==0 && e==0 && q==0)
        {
            break;
        }
         build();
          if(test)
            cout<< endl;
        test++;



    for(int i = 1; i <= e; i++)
    {
        int a, b, cost;
        cin >> a >> b >> cost;
        mat[a][b] = cost;
         mat[b][a] = cost;
    }
    floyd(n);

     printf("Case #%d\n",test);
    for(int i=1;i<=q;i++)
    {
        cin>>x>>y;

         if(mat[x][y]==INF)
         {
             cout<<"no path"<<endl;
         }
         else
         {

    cout<<mat[x][y]<<endl;
         }
    }



    memset(mat,0,sizeof mat);

}
}

