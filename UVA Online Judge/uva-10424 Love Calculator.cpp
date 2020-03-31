#include<bits/stdc++.h>
using namespace std;
int rev ( int n)
{
     int sum =0;
    int r;
    while(n > 0)
    {
        r=n % 10;

        n /= 10;
        sum=sum+r;
    }
    return sum;
}
int main()
{
    int i=1;
    int x,y,n1,n2;
    double r,r1,r2;
    map<char,int>mp;
    for(char ch='a';ch<='z';ch++)
    {
        mp[ch]=i;
        i++;
    }

    string s1,s2,s3,s4;
    while(getline(cin,s3))
    {

        getline(cin,s4);
         for(int j=0;j<s3.size();j++)
        {
            if((s3[j]>='A' && s3[j]<='Z') || (s3[j]>='a' && s3[j]<='z') )
            {
                s1+=s3[j];
            }

        }
        n1=0;
        for(int j=0;j<s1.size();j++)
        {
            if(s1[j]>='A' && s1[j]<='Z')
            {
                s1[j]=s1[j]+32;
            }
            n1=n1+mp[s1[j]];
        }

         for(int j=0;j<s4.size();j++)
        {
            if((s4[j]>='A' && s4[j]<='Z') || (s4[j]>='a' && s4[j]<='z') )
            {
                s2+=s4[j];
            }

        }
        n2=0;
        for(int j=0;j<s2.size();j++)
        {
            if(s2[j]>='A' && s2[j]<='Z')
            {
                s2[j]=s2[j]+32;
            }
              n2=n2+mp[s2[j]];
        }
       // cout<<n1<<" "<<n2<<endl;

        x=rev(n1);
      while((x>=10)&&(n1>0))
      {
           x=rev(x);
      }
      y=rev(n2);
      while((y>=10)&&(n2>0))
      {
           y=rev(y);
      }
       // cout<<x<<" "<<y<<endl;
   r1=double(x);
   r2=double(y);
        if(r1>=r2)
        {

            r=(r2/r1)*100.0;
            printf("%.2lf",r);
        }
        else
        {
              r=(r1/r2)*100.0;
            printf("%.2lf",r);
        }
        printf(" %c\n",37);
s1.clear();
s2.clear();
s3.clear();
s4.clear();


    }

}

