#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,s,e,f,sum,c;

    while(scanf("%d",&test)==1)
    {
        for(int i=1;i<=test;i++)
        {
            scanf("%d%d%d",&e,&f,&c);
            sum=0;
            s=e+f;
            for(int j=c;s>=c;j=j+c)
        {


                    sum++;
                    s=s-c;
                    s++;

                }





            printf("%d\n",sum);
        }





    }
}

