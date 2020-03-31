#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,s,d,t;
    while(scanf("%d",&t)==1)
    {
        for(int i=1;i<=t;i++)
        {
            scanf("%d%d",&s,&d);


        a=(s+d)/2;
        b=s-a;
        if(((s+d)%2!=0) || (s<d))
        {
            cout<<"impossible"<<endl;
        }
        else if(s==0 && d==0)
        {
             printf("%d %d\n",0,0);

        }
        else{
            if(a>=b)
            {
                printf("%d %d\n",a,b);
            }
            else
            {
                printf("%d %d\n",b,a);
            }
        }
    }

}
}
