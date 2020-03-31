#include <bits/stdc++.h>
using namespace std;
#define inf 1<<30
typedef pair <int, int> pi;
int maze[1003][1003];
int dist[1003][1003];
int reach[1003][1003];
int fx[]= {0,-1, 0,1};
int fy[]= {1, 0,-1,0};
int row ,col;

int bfs_flood_fill(int i , int j)
{
   reach[i][j] = 1;
   dist[i][j]  = 0;

   queue<pi> q;
   q.push(make_pair(i,j));
   while(!q.empty())
   {
       int a , b;

       a = q.front().first;
       b = q.front().second;
       q.pop();
       for(i = 0; i < 4; i++)
       {
           int x , y;
           x = a + fx[i];
           y = b + fy[i];

           if(x >= 0 and x < row and y >= 0 and y < col and dist[x][y] == -1)
           {
               dist[x][y] = (dist[a][b] +1);
               //reach[x][y] = 1;
               q.push(make_pair(x,y));

           }
       }

   }

}
void pr()
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout<< dist[i][j] << " ";
        }
        cout<< endl;
    }
}
void setx ()
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j ++)
        {
            reach[i][j] = -1;
            dist[i][j] = -1;
        }
    }
}
int main()
{

   int  b,r,n,c,si,sj,di,dj;


   while(cin>>row>>col)
   {

       if(row==0 && col==0)
       {
           break;
       }
       cin>>b;
        setx();
       for(int i=0;i<b;i++)
       {
           scanf("%d%d",&r,&n);

           for(int j=0;j<n;j++)
           {
               scanf("%d",&c);
               dist[r][c]=99999;
           }
       }
       scanf("%d%d%d%d",&si,&sj,&di,&dj);


       bfs_flood_fill(si,sj);




      cout<<dist[di][dj]<< endl;
      memset(reach,0,sizeof reach);
         memset(dist,0,sizeof dist);
            memset(maze,0,sizeof maze);

   }


}
