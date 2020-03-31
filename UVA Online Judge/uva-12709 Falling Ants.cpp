#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,l[100],w[100],h[100],v[100],c;

    while(scanf("%d",&t)==1)
    {
        if(t==0)
        {
            break;
        }
        for(int i=0;i<t;i++)
        {
            cin>>l[i]>>w[i]>>h[i];
            v[i]=l[i]*w[i]*h[i];

        }



        int Max=-1;
        //cout<<"max="<<Max<<endl;
        int m=-1,u,pos;

        for(int i=0;i<t;i++)
        {
            if(h[i]>Max)
                {

                    Max=h[i];

                }

        }
         for(int i=0;i<t;i++)
        {
            if(h[i]==Max)
                {
                    if(v[i]>m)
                    {
                        m=v[i];
                    }
                }

        }
        cout<<m<<endl;
           memset(l,0,sizeof l);
           memset(w,0,sizeof w);
           memset(h,0,sizeof h);


    }
    return 0;
}
