#include<bits/stdc++.h>
using namespace std;
int a[1000][1000];

int main()
{

    char ch;
    int r,c,pos,s1=0,f=0,d,t;
    string s;

    while(scanf("%d%d",&r,&c)==2)
    {
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
                a[k][pos]=42;
            }
            else{
                a[k][pos]=46;
            }
            pos++;

            }
            s.clear();
        }


        t=0;
        for(int i=1;i<=r;i++)
        {

            for(int j=1;j<=c;j++)
            {
                  d=0;
                if(a[i][j]==42)
                {
                    if(i-1>=1 && i-1<=r && j-1>=1 && j-1<=c && a[i-1][j-1]==42)
                    {
                        d++;
                    }
                    if(i-1>=1 && i-1<=r && j+1>=1 && j+1<=c && a[i-1][j+1]==42)
                    {
                        d++;
                    }
                    if(i>=1 && i<=r && j-1>=1 && j-1<=c && a[i][j-1]==42)
                    {
                        d++;
                    }
                    if(i>=1 && i<=r && j+1>=1 && j+1<=c && a[i][j+1]==42)
                    {
                        d++;
                    }
                    if(i+1>=1 && i+1<=r && j-1>=1 && j-1<=c && a[i+1][j-1]==42)
                    {
                        d++;
                    }
                    if(i+1>=1 && i+1<=r && j+1>=1 && j+1<=c && a[i+1][j+1]==42)
                    {
                        d++;
                    }
                    if(i-1>=1 && i-1<=r && j>=1 && j<=c && a[i-1][j]==42)
                    {
                        d++;
                    }
                    if(i+1>=1 && i+1<=r && j>=1 && j<=c && a[i+1][j]==42)
                    {
                        d++;
                    }
                    if(d==0)
                    {
                        t++;
                    }

                }
            }

            }

            cout<<t<<endl;
            memset(a,0,sizeof a);

        }
        return 0;
}



