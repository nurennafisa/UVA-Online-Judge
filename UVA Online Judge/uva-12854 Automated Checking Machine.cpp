#include<bits/stdc++.h>
using namespace std;
int a[5];
int b[5];
int main()
{
    int m,o,n,d,e,c;
 while(scanf("%d%d%d%d%d",&m,&n,&c,&d,&e)==5)
 {
   a[0]=m;
   a[1]=n;
   a[2]=c;
   a[3]=d;
   a[4]=e;

  for(int j=0;j<5;j++)
    {
        scanf("%d",&b[j]);
    }
    int o=0;
    for(int k=0;k<5;k++)
    {
        if(a[k]!=b[k])
        {
            o++;
        }
    }
    if(o==5)
    {
        cout<<"Y"<<endl;
    }
    else{
        cout<<"N"<<endl;
    }
    memset(a,0,sizeof a);
      memset(b,0,sizeof b);


 }









    return 0;
}
