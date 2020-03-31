#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int test;
    double tax,total=0.0,k;
    scanf("%lld",&test);
    for(int i=1;i<=test;i++)
    {
        scanf("%lf",&k);
        k=k-180000.0;
        tax=0.0;
        printf(".....%lf....\n",tax);
        if(k>0.0)
        {
            tax=180000.0*(10.0/100.0);
            total=total+tax;
               k=k-300000.0;

        }
        printf(".....%lf....\n",tax);
        if(k>0.0)
        {
            tax=300000.0*(15.0/100.0);
             total=total+tax;
               k=k-400000.0;

        }
        printf(".....%lf....\n",tax);
        if(k>0.0)
        {
            tax=400000.0*(20.0/100.0);
             total=total+tax;
               k=k-300000.0;

        }
        printf(".....%lf....\n",tax);
        if(k>0.0)
        {
            tax=300000.0*(25.0/100.0);
             total=total+tax;

        }
        printf(".....%lf....\n",tax);
        if(tax>0.0 && tax<2000.0)
        {
            tax=2000;
              printf("Case %lld: %lf\n",test,tax);
        }
        else
        {
            tax=ceil(total);
             printf("Case %lld: %lf\n",test,tax);
        }

    }
}
