#include<bits/stdc++.h>
using namespace std;
float un(float c)
{
    float f=(1.8 * c) + 32;
    return f;
}
float fun(float f)
{
    float c=(f- 32) * 5 / 9;
    return c;
}


int main()
{
    int test;
    float c,f,ini,inc,n;
    while(scanf("%d",&test)==1)
    {
        for(int i=1;i<=test;i++)
        {
            scanf("%f%f",&c,&f);

            ini=un(c);

            inc=f+ini;

            n=fun(inc);



            printf("Case %d: %.2f\n",i,n);

        }
    }
}
