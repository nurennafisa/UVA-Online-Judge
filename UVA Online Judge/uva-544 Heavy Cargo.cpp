#include <bits/stdc++.h>
#include <stdio.h>
int mat[205][205];
using namespace std;
#define INF 99999999
string s1,s2;
map<string,int>mp;
//mmini maxi te build drker hoi na
void floyd (int n)
{
    for(int k = 1; k <= n; k++)
    {
        for(int i = 1; i <= n; i++)
        {
            for(int j =  1; j <= n; j++)
            {
                 mat[i][j] = max(mat[i][j], min(mat[i][k] ,mat[k][j]));
            }
        }
    }
}
int main()
{

    int n, e,test=0;

    while(cin >> n >> e)
    {
        if(n==0 && e==0)
        {
            break;
        }
         //build();
        test++;

int h=0;
    for(int i = 1; i <= e; i++)
    {
        int cost;
        cin >>s1>>s2;
        cin>>cost;
        if(mp[s1]==0)
        {
             h++;
        mp[s1]=h;
        }
        if(mp[s2]==0)
        {
             h++;
        mp[s2]=h;
        }


        mat[mp[s1]][mp[s2]] = cost;
         mat[mp[s2]][mp[s1]] = cost;
         s1.clear();
         s2.clear();

    }
    floyd(n);
        cin>>s1>>s2;
  printf("Scenario #%d\n",test);


  cout<<mat[mp[s1]][mp[s2]]<<" tons"<<endl;
  cout<<endl;
    memset(mat,0,sizeof mat);
    mp.clear();
    s1.clear();
    s2.clear();

}
}


