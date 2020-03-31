#include<bits/stdc++.h>
using namespace std;
int main()
{

   int b,a;
    while(scanf("%d%d",&a,&b)==2)
    {
        if(a==-1 && b==-1)
        {
            break;
        }
        int d=abs(a-b);
        int d1=100-d;
        cout<<min(d,d1)<<endl;

    }
}

