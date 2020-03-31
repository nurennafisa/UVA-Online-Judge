#include<bits/stdc++.h>
using namespace std;
int a[1000][1000];

int main()
{

    char ch;
    int r,c,pos,s1=0,f=0;
    string s;

    while(scanf("%d%d",&r,&c)==2)
    {  s1++;
        if(r==0 && c==0)
        {
            break;
        }
        getchar();
        for(int k=1;k<=r;k++)
        {
            cin>>s;
            pos=1;
            for(int n=0;n<s.size();n++)
            {
            if(s[n]=='*')
            {
                a[k][pos]=64;
            }
            else{
                a[k][pos]=0;
            }
            pos++;

            }
            s.clear();
        }


        for(int i=1;i<=r;i++)
        {
            for(int j=1;j<=c;j++)
            {
                if(a[i][j]==64)
                {
                    if(i-1>=1 && i-1<=r && j-1>=1 && j-1<=c && a[i-1][j-1]!=64)
                    {
                        a[i-1][j-1]++;
                    }
                    if(i-1>=1 && i-1<=r && j+1>=1 && j+1<=c && a[i-1][j+1]!=64)
                    {
                        a[i-1][j+1]++;
                    }
                    if(i>=1 && i<=r && j-1>=1 && j-1<=c && a[i][j-1]!=64)
                    {
                        a[i][j-1]++;
                    }
                    if(i>=1 && i<=r && j+1>=1 && j+1<=c && a[i][j+1]!=64)
                    {
                        a[i][j+1]++;
                    }
                    if(i+1>=1 && i+1<=r && j-1>=1 && j-1<=c && a[i+1][j-1]!=64)
                    {
                        a[i+1][j-1]++;
                    }
                    if(i+1>=1 && i+1<=r && j+1>=1 && j+1<=c && a[i+1][j+1]!=64)
                    {
                        a[i+1][j+1]++;
                    }
                    if(i-1>=1 && i-1<=r && j>=1 && j<=c && a[i-1][j]!=64)
                    {
                        a[i-1][j]++;
                    }
                    if(i+1>=1 && i+1<=r && j>=1 && j<=c && a[i+1][j]!=64)
                    {
                        a[i+1][j]++;
                    }

                }
            }

            }
            if(f)
                printf("\n");
                f=1;
            printf("Field #%d:\n",s1);
            for(int x=1;x<=r;x++)
        {
            for(int z=1;z<=c;z++)
            {
                if(a[x][z]==64)
                {
                    printf("*");
                }
                else{
                    printf("%d",a[x][z]);
                }
            }
            printf("\n");

        }


        memset(a,0,sizeof a);

        }

    }

