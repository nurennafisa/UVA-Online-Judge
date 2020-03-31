#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    long long int sum1,sum2,n;
    string s;
    while(scanf("%d",&test)==1)
    {
        for(int i=1;i<=test;i++)
        {
        cin>>s;
        n=0;
        for(int i=0;i<s.length();i++)
        {
            s[i]=s[i]-48;
            n=n*10+s[i];
        }

        sum2=0;
        for(int i=0;i<s.length();i++)
        {   sum1=1;
           for(int j=0;j<s.length();j++)
           {
               sum1=sum1*s[i];

           }
           sum2=sum2+sum1;

        }


            if(sum2==n)
            {
                printf("Armstrong\n");
            }
            else{
                printf("Not Armstrong\n");
            }
            s.clear();

    }
    }


return 0;
}
