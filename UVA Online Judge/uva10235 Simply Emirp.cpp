#include <bits/stdc++.h>
using namespace std;
int n;
bool prime (int n)
{
    int sq = sqrt(n);

    for(int i = 2; i <= sq; i++)
    {
        if(n % i ==0)
            return false;
    }
    return true;
}
int rev (int n)
{
    int res =0;
    while(n > 0)
    {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}

int main()
{
    bool x;
   int y;
while(scanf("%d",&n)!=EOF)
{
    x=prime(n);
    if(x==true)
    {
        y=rev(n);
        if(n==y)
        {
            printf("%d is prime.",n);

        }
        else
        {

        x=prime(y);
        if(x==true)
        {
            printf("%d is emirp.",n);
        }

    else
        {
            printf("%d is prime.",n);
        }
    }
    }
    else
        {
            printf("%d is not prime.",n);
        }
        printf("\n");
}
return 0;
}












