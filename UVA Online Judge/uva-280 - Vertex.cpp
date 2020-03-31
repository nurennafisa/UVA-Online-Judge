#include <bits/stdc++.h>
#include <stdio.h>
int mat[105][105];
using namespace std;
#define INF 9999999
void build ()
{
    for(int i = 1; i <= 100; i++)
    {
        for(int j = 1; j <= 100; j++)
        {
            /*if(i == j)
            {
                mat[i][j] = 0;
                continue;
            }*/
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

    int n, q,s;
 vector<int>v;

     int a, b, cost=1,c;
    while(cin >> n )
    {

        if(n==0)
        {
            break;
        }
         build();

        while(cin >> a)
        {

        if(a==0)
        {
            break;
        }

       while(cin>>b)
       {
           if(b==0)
           {
               break;
           }
              mat[a][b] = cost;
       }
        }



    floyd(n);
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        cin>>s;
        c=0;
        for(int j=1;j<=n;j++)
        {
            if(mat[s][j]==INF)
            {
                v.push_back(j);
                c++;
            }
        }
        cout<<c;
        for(int k=0;k<v.size();k++)
        {
            cout<<" "<<v[k];
        }
        cout<<endl;
        v.clear();






}
}

}
/*
 3 4
 1 2 1
 2 3 2
 1 3 6
 3 1 5

 1 2 1 4 4 2 2 7 7 1



*/

