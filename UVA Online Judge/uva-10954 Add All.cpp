#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num,sum,res,x,y;
    //priority queue
    //Max   priority_queue<int>pq;
    //Min priority_queue<int,vector<int>,greater<int> >pq;

    while(scanf("%d",&n)==1)
    {
            priority_queue<int,vector<int>,greater<int> >pq;
        if(n==0)
        {
            break;
        }
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&num);
            pq.push(num);
        }
        res=0;
        while(pq.size()>1)
        {
            x=pq.top();
            pq.pop();
            y=pq.top();
            sum=x+y;
            pq.push(sum);
            pq.pop();
            res=res+sum;
        }
        cout<<res<<endl;

    }
}
