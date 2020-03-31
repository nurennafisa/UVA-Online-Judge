#include<bits/stdc++.h>
using namespace std;
int a[1000];
int main()
{
    int test,n,Max,i,x,sum;
vector<int>v;
    string s,item;
    while(scanf("%d",&test)==1)
    {
        getchar();
        for(int l=1;l<=test;l++)
        {
             getline(cin,s);
        istringstream item(s);

        while(item >> s)
        {
        sum=0;
        for(int g=0;g<s.size();g++)
        {
            sum=sum*10+(s[g]-48);
        }
        v.push_back(sum);
        sum=0;
        s.clear();

        }

            Max=-1;
        for(int k=0;k<v.size();k++)
        {
         for(int j=k+1;j<v.size();j++)
        {

               x=__gcd(v[k],v[j]);

                    if(x>Max)
                    {
                        Max=x;
                    }
        }

        }


            cout<<Max<<endl;
       v.clear();
         s.clear();

         item.clear();




               }
    }

    return 0;
}
