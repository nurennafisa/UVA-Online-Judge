#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,ini,t;
    while(scanf("%d%d%d%d",&ini,&a,&b,&c)==4)
    {
        if(ini==0 && a==0 && b==0 && c==0)
        {
            break;
        }
        t=360*3;
        t=t+min((ini-a),(40-(ini-a)));
        t=t+min((b-a),(40-(b-a)));
        t=t+min((c-b),(40-(c- b)));



                          cout<<t*9<<endl;

    }
}
