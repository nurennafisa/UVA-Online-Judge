#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,h2,m1,m2,sum1,sum2,ans,d;
    while(scanf("%d%d%d%d",&h1,&m1,&h2,&m2)==4)
    {
        if(h1==0 && m1==0 && h2==0 && m2==0)
        {
            break;
        }
        if(h1==0)
        {
            h1=24;
        }
        if(h2==0)
        {
            h2=24;
        }
        if(m2<m1)
        {
            if(h2<=h1)
            {
            sum2=h2*60+24*60+m2;
            sum1=h1*60+m1;
            ans=sum2-sum1;
            }
            else if(h2>h1)
            {
                sum2=h2*60+m2;
            sum1=h1*60+m1;
            ans=sum2-sum1;
            }

        }
        else if(m2>=m1)
        {
            if(h2>=h1)
            {

            sum2=h2*60+m2;
            sum1=h1*60+m1;
            ans=sum2-sum1;
            }
            if(h2<h1)
            {

            sum2=h2*60+24*60+m2;
            sum1=h1*60+m1;
            ans=sum2-sum1;
            }

        }
        cout<<ans<<endl;
    }






    return 0;
}
