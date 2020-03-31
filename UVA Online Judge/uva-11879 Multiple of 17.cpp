#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long int n,p,p1;
    string s;
    while(getline(cin,s))
    {
       if(s=="0")
       {
           break;
       }
       n=0;

           for(int i=0;i<s.size();i++)
           {

               n=n*10+(s[i]-48);//natural vag er process

            n=n%17;

           }





           if(n==0)
           {
               printf("1\n");
           }
           else
           {
               printf("0\n");
           }
           s.clear();


    }

}

//
