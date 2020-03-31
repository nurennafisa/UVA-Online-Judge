#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    double sum,c,n,a,p;
    map<char,double>mp;
        string s;
        char ch;
    while(scanf("%d",&test)==1)
    {
        mp['C']=12.01;
          mp['H']=1.008;
            mp['O']=16.00;
              mp['N']=14.01;
        for(int i=1;i<=test;i++)
        {
            cin>>s;
            if(s.size()==1)
            {
                printf("%.3lf\n",mp[s[0]]);
                s.clear();
                continue;
            }

            sum=0;

            for(int j=0;j<s.size();j++)
            {
                if(isalpha(s[j]))
                {
                    ch=s[j];


               p=j+1;

               n=0;
                while(isdigit(s[p]))
                {

                    n=n*10+(s[p]-48);

                    p++;
                }


                     if(n!=0)
                    a=mp[ch]*n;
                    else{
                        a=mp[ch];
                    }


                    sum=sum+a;

                a=0;




            }

            }
         printf("%.3lf\n",sum);


            s.clear();

    }

        }





}





