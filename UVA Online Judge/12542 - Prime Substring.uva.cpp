#include<bits/stdc++.h>
using namespace std;
bool prime (long long int n)
{  if(n==1 || n==0)
{
    return false;
}
    long long int sq = sqrt(n);

    for(long long int i = 2; i <= sq; i++)
    {
        if(n % i ==0)
            return false;
    }
    return true;
}
int main()
{
    long long int j,res,mx;
   string s;
   while(cin>>s)
   {
       if(s=="0")
       {
           break;
       }
       res=0;
       mx=-1;
       for(long long int i=0;i<s.length();i++)
       {
           j=s[i]-'0';
           bool x=prime(j);
if(x==true || (s[i]=='1' && (s[i+1]=='1'||s[i+1]=='3'||s[i+1]=='7'||s[i+1]=='9'||s[i-1]=='1'||s[i-1]=='3'||s[i-1]=='7'||s[i-1]=='9'))||(s[i]=='2'&&(s[i+1]=='9'||s[i+1]=='3'||s[i-1]=='9'||s[i-1]=='3')) ||(s[i]=='3'&&(s[i+1]=='1'||s[i+1]=='7'||s[i-1]=='1'||s[i-1]=='7')) ||(s[i]=='4'&&(s[i+1]=='1'||s[i+1]=='3'||s[i+1]=='7'||s[i-1]=='1'||s[i-1]=='3'||s[i-1]=='7'))||(s[i]=='5'&&(s[i+1]=='3'||s[i+1]=='9'||s[i-1]=='3'||s[i-1]=='9')) ||(s[i]=='6'&&(s[i+1]=='1'||s[i+1]=='7'||s[i-1]=='1'||s[i-1]=='7'))||(s[i]=='7' && (s[i+1]=='1'||s[i+1]=='3'||s[i+1]=='9'||s[i-1]=='1'||s[i-1]=='3'||s[i-1]=='9'))    ||(s[i]=='8' && (s[i+1]=='3'||s[i+1]=='9'||s[i-1]=='3'||s[i-1]=='9'))||(s[i]=='9' && (s[i+1]=='7'||s[i-1]=='7')))

           {
            res=res*10+j;
            if( res!=1)
                {

            bool y=prime(res);
            if(y==true)
            {
                if(res>mx)
                {
                    mx=res;
                }
            }
                }

          }
       }




       cout<<mx<<endl;
       s.clear();
   }


    return 0;
}




