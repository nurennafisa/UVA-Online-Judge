
#include <bits/stdc++.h>
using namespace std;
int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; /// move up down && corner /// If we want only move in up and down , thne
int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; /// UVA problem samle (Oil deposite )
int row , col;
/*
for up down right left
int fx[]={+1,-1,+0,+0};
int fy[]={+0,+0,+1,-1};
*/char maze[101][101];
int r[101][101];
void dfs (int x, int y)
{
    r[x][y] = 1;

    for(int i = 0; i < 8; i++)
    {
        int a, b;
        a = x + fx[i];
        b = y + fy[i];

        if( a >= 0 && a < row && b >= 0 && b < row && r[a][b] == 0)
        {
            r[a][b] = 1;
            if(maze[a][b] == '1')
            {
                dfs(a , b);
            }
        }
    }
}
int main()
{
    int m=0;
    string s;
    while(cin >> row)
    {
        getchar();
        m++;

        for(int i = 0; i < row; i++)
        {

                cin >>s;
                for(int g=0;g<s.size();g++)
                {
                    maze[i][g]=s[g];
                }
                s.clear();
        }


        memset(r , 0, sizeof r);
        int cnt = 0;
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < row; j++)
            {
                if(r[i][j] == 0)
                {
                    if(maze[i][j] == '1')
                    {
                        dfs(i , j);
                        cnt++;
                    }
                }
            }
        }

        printf("Image number %d contains %d war eagles.\n",m,cnt);

        memset(maze,0,sizeof maze);
        s.clear();
    }

}









