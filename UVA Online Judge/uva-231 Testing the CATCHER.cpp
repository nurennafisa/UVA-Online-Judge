#include <bits/stdc++.h>
using namespace std;
int  lis[1001];
vector<int>arr;
int mx;
void LIS (int n)
{
    for(int i = 0; i <= n; i++)
    {
        lis[i] = 1;
    }

    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i] >arr[j] && lis[i] < lis[j] + 1)
            {
                lis[i] = lis[j] + 1;
            }
        }
    }


    for(int i = 0; i < n; i++)
    {
        if(mx < lis[i])
            mx =lis[i];
    }
}
int main()
{
    int n,c,i=0,m,test=0,k=0;
     while(scanf("%d", &m)==1)
    {

        test++;

        if(m==-1)
        {
            break;
        }
        arr.push_back(m);

    while(scanf("%d", &m)==1)
    {

        if(m==-1)
        {
             if(k)
            printf("\n");
            k=1;

            printf("Test #%d:\n",test);
            reverse(arr.begin(),arr.end());
    mx = -1;
    LIS(arr.size());

    printf("  maximum possible interceptions: %d\n",mx);


    arr.clear();
    memset(lis,0,sizeof lis);
break;


        }
        arr.push_back(m);

}
}

}
