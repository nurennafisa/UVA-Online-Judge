#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        if(n==1 || n==2)
        {
            cout<<"NO"<<endl;
        }
        else if(n==3)
        {
             cout<<"YES"<<endl;
        }
        else
        {
            n=(n*(n-1))/2;
            if(n%3==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    }

