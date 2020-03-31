#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int test,c,c1;
    scanf("%d",&test);
    for(int i=1;i<=test;i++)
    {
        cin>>s;

        if(s.length()==5)
        {
            printf("3\n");
        }
        else{
                c=0;
        c1=0;
        for(int i=0;i<s.length();i++)
        {
             if(s[i]=='o')
            {
                c++;
            }
            if(s[i]=='n')
            {
                c++;
            }
            if(s[i]=='e')
            {
                c++;
            }

            if(s[i]=='w')
            {
                c1++;
            }
            if(s[i]=='t')
            {
                c1++;
            }
            if(s[i]=='o')
            {
                c1++;
            }
        }
        if(c>=c1)
        {
            printf("1\n");
        }
        else
        {
            printf("2\n");


        }
        }
        s.clear();
    }














    return 0;

}
