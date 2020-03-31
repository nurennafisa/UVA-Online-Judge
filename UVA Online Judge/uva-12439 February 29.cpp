#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int d1,d2,y1,y2,c,j,year;
   int test;
    map<string,int>mp;
    string s1,s2;
    char ch1,ch2;
    mp["January"]=1;
    mp["February"]=2;
    mp["March"]=3;
    mp["April"]=4;
    mp["May"]=5;
    mp["June"]=6;
    mp["July"]=7;
       mp["August"]=8;
    mp["September"]=9;
    mp["October"]=10;
    mp["November"]=11;
    mp["December"]=12;

    scanf("%d",&test);
    getchar();
    for(int i=1;i<=test;i++)
    {
        cin>>s1;
          scanf("%lld",&d1);
        cin>>ch1;
        scanf("%lld",&y1);
             //getchar();
         cin>>s2;
          scanf("%lld",&d2);
        cin>>ch2;
           scanf("%lld",&y2);

         c=0;
         year=0;

         if(y1!=y2)
         {
           if((((y1 % 100) == 0)&&((y1 % 400) == 0)) || ((y1 % 100) != 0)&&((y1% 4) == 0))
         {
             if(mp[s2]==2 && d2==29)
             {
                 c++;
             }
             else if(mp[s1]<2)
             {
                 c++;
             }
         }

          if((((y2 % 100) == 0)&&((y2 % 400) == 0)) || ((y2 % 100) != 0)&&((y2% 4) == 0))
         {
             if(mp[s2]==2 && d2==29)
             {
                 c++;
             }
            else if(mp[s2]>2)
             {
                 c++;
             }
         }

         for( j=y1+1;j<y2;j++)
         {
             if((((j % 100) == 0)&&((j % 400) == 0)) || ((j % 100) != 0)&&((j% 4) == 0))
             {
                         year=j;
                         c++;
                         break;


             }
         }
          if(year>0)
              c=c+((y2-1)-year)/4;

         }
         else
         {
             if((((y1 % 100) == 0)&&((y1 % 400) == 0)) || ((y1 % 100) != 0)&&((y1% 4) == 0))
         {
             if((mp[s1]<=2 && d1<=29 ) || (mp[s2]<=2 && d2<=29))
             {
                 c++;
             }
         }


         }
         printf("Case %d: %lld\n",i,c);
         s1.clear();
            s2.clear();


    }

}
