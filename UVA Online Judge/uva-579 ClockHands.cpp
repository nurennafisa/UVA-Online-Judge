#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,m;
    float a1,a2;
    while(scanf("%d:%d",&h,&m)==2)
    {

        if(h==0 && m==00)
        {
            break;
        }
        a1=abs(30*h-5.5*m);
        a2=abs(360-abs(30*h-5.5*m));
        if(a1<a2)
        {
                printf("%.3f\n",a1);

        }
        else
        {
               printf("%.3f\n",a2);
        }

    }
}
