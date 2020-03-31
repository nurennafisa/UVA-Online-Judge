#include <bits/stdc++.h>
#include <stdio.h>
int mat[25][25];
using namespace std;
#define INF 99999999
void build ()
{
    for(int i = 1; i <= 25; i++)
    {
        for(int j = 1; j <= 25; j++)
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

    int n, e,pos,test=0;
    int x, y,sum,Min;
    string s;
    map<int,string>mp;
    while(cin >> n >> e)
    {
        if(n==0 && e==0)
        {
            break;
        }
         build();
        test++;

        for(int i=1;i<=n;i++)
        {
            cin>>s;
            mp[i]=s;
            s.clear();
        }

    for(int i = 1; i <= e; i++)
    {
        int a, b, cost;
        cin >> a >> b >> cost;
        mat[a][b] = cost;
         mat[b][a] = cost;
    }
    floyd(n);
 Min=9999999999;
    for(int i = 1; i <= n; i++)
    {    sum=0;
        for(int j = 1; j <= n; j++)
        {
            if(i==j)
            {
                continue;
            }
            sum=sum+mat[i][j];

        }
        if(sum<Min)
        {
            Min=sum;
            pos=i;
            }
    }
    printf("Case #%d : ",test);
    cout<<mp[pos]<<endl;
    s.clear();
    mp.clear();
    memset(mat,0,sizeof mat);

}
}
