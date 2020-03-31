#include<bits/stdc++.h>
using namespace std;
long long int visit[100000000];


int main()
{
    visit[1]=-1;
    visit[64]=-1;
    visit[729]=-1;
    visit[4096]=-1;
    visit[15625]=-1;
    visit[46656]=-1;
    visit[117649]=-1;
    visit[262144]=-1;
    visit[531441]=-1;
     visit[1000000]=-1;
      visit[1771561]=-1;
       visit[2985984]=-1;
        visit[4826809]=-1;
         visit[7529536]=-1;
          visit[11390625]=-1;
           visit[16777216]=-1;
            visit[24137569]=-1;
             visit[34012224]=-1;
              visit[47045881]=-1;
               visit[64000000]=-1;
                visit[85766121]=-1;

               long long int n;
               while(scanf("%lld",&n)==1)
               {
                   if(n==0)
                   {
                       break;
                   }
                   if(visit[n]==-1)
                   {
                       cout<<"Special"<<endl;
                   }
                   else{
                    cout<<"Ordinary"<<endl;
                   }
               }


    return 0;
}
