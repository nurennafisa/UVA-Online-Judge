#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,r,red,v,sun,s;
    vector<double>vc;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
        vc.push_back(a);
        vc.push_back(b);
        vc.push_back(c);
        sort(vc.begin(),vc.end());
        a=vc[0];
        b=vc[1];
        c=vc[2];
        s=(a+b+c)/2;
        r=sqrt(s*(s-a)*(s-b)*(s-c))/s;
        red=3.14159265359*(r*r);
        v=((a*b)/2)-red;
        sun=(3.14159265359*((c/2)*(c/2)))-red;
        sun=sun-v;
      printf("%.4lf %.4lf %.4lf\n",sun,v,red);
      vc.clear();
    }
}
