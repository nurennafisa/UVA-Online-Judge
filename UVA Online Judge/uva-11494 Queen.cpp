#include <bits/stdc++.h>
#define inf 1<<30

using namespace std;
typedef pair <int, int> pi;

int dist[10][10];
int reach[10][10];
int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1};
int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1};
int row ,col;

int main()
{


   int x1,y1,x2,y2;

   while(scanf("%d%d%d%d",&x1,&y1,&x2,&y2)==4)
   {
        if(x1==0 && x2==0 && y1==0 && y2==0)
        {
            break;
        }




       for(int i=1;i<=8;i++)
       {
               if(i!=y1)
               dist[x1][i]=1;
                if(i!=x1)
               dist[i][y1]=1;


       }
       for(int i=1;i<=8;i++)
       {
           for(int j=1;j<=8;j++)
           {
               if(i==j && i!=x1 && j!=y1 )
               {
                   dist[i][j]=1;



               }
           }
       }

int r=x1;
int c=y1;
       while(r>=1 && c<=8)
       {
           r--;
           c++;
           dist[r][c]=1;
       }
r=x1;
c=y1;
       while(r<=8 && c>=1)
       {
           r++;
           c--;
           dist[r][c]=1;
       }


        if(dist[x2][y2]!=1)
        {
            if(x1==x2 && y1==y2)
            {
                cout<<0<<endl;
            }
            else{
                 cout<<2<<endl;
            }
        }
        else
       {
           cout<<1<<endl;
       }


   }


}
