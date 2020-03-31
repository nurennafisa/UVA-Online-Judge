#include<bits/stdc++.h>
using namespace std;
int v[108][108];

int main()
{
int n,sum,c=0;

while(scanf("%d",&n)==1)
{
    c++;
    if(n==0)
    {
        break;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&v[i][j]);
        }
    }

     int p=1;
    int q=n;
    int a=p;
    int b=q;
    int lb=a;
   int ub=b;

if(n%2!=0)
{
    n=n/2+1;
}
else{
    n=n/2;
}

       printf("Case %d: ",c);
    for(int k=1;k<=n;k++)
    {

 sum=0;
 lb=a;
 ub=b;
    while(lb<=ub)
    {

        sum=sum+v[a][lb];
        v[a][lb]=0;



        sum=sum+v[lb][a];
        v[lb][a]=0;




        sum=sum+v[b][lb];
        v[b][lb]=0;



        sum=sum+v[lb][b];
        v[lb][b]=0;


        lb++;

    }

    printf("%d",sum);
    if(k!=n)
    {
        printf(" ");
    }


    a++;
    b--;


    }
    memset(v,0,sizeof v);
    cout<<endl;

}












    return 0;
}
