#include <bits/stdc++.h>
using namespace std;

int a[1000];
void bubble (int n)
{
    for(int k=0;k<n;k++)
    {
        scanf("%d",&a[k]);

    }
    int swapings=0;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                swapings++;
            }
        }
    }
    printf("Minimum exchange operations : %d",swapings);
    printf("\n");
    memset(a,0,sizeof a);
}


int main()
{
    int test;
    while(scanf("%d",&test)!=EOF)
    {

    bubble(test);
    }



return 0;
}

