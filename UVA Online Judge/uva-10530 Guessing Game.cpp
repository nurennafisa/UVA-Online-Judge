#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,Max,Min,b=0;
    string s;
    vector<int>v1,v2;
    while(scanf("%d",&n)==1)
    {

        if(n==0)
        {
            break;
        }
          getchar();
        getline(cin,s);
        Max=-1;
        Min=999;
        if(s=="right on")
        {
            if(v1.size()>0)
            {
            sort(v1.begin(),v1.end());
             Min=v1[0];
            }
             if(v2.size()>0)
            {
            sort(v2.begin(),v2.end());
            reverse(v2.begin(),v2.end());
            Max=v2[0];
            }

               if(n>Max && n<Min)
               {
                    printf("Stan may be honest\n");
               }
                else{
                printf("Stan is dishonest\n");
            }
             v1.clear();
            v2.clear();

        }

        if(s=="too high")
        {
            v1.push_back(n);
        }
         if(s=="too low")
        {
            v2.push_back(n);
        }

        s.clear();

        }
}
