#include<bits/stdc++.h>
using namespace std;
int arr[10000];
bool prime (int n)
{
    int sq = sqrt(n);

    for(int i = 1; i <= sq; i++)
    {
        if(n % i ==0)
            return false;
    }
    return true;
}
int main()
{
    string s,s1;

    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++)
    {
        cin>>s;
        for(int i = 0; i < s.length(); i++)
   {

           arr[s[i]]++;

   }

   for(int i = 0; i <= 122; i++)
   {
        if(arr[i] > 0)
       {
          bool x=prime(arr[i]);
          if(x==true)
          {
              s1+=i;
          }
       }

   }
      cout<<"Case "<<i<<": "<<s1<<endl;
        s.clear();
         s1.clear();

        }


    return 0;
}
