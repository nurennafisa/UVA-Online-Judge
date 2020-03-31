#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;
    vector<int>v;
    while(scanf("%d",&n)==1)
    {
        for(int i=1;i<=n;i++)
        {
            scanf("%d%d%d",&a,&b,&c);
            v.push_back(a);
              v.push_back(b);
                v.push_back(c);
                sort(v.begin(),v.end());
                if((v[0]+v[1])<=v[2])
                {
                     printf("Wrong!!\n");

                }
                else
                {

                     printf("OK\n");
                }
                v.clear();
        }
    }
}
