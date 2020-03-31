#include<bits/stdc++.h>
using namespace  std;
int main()
{
    int n,c1,c2,c3,a,b,p;

    while(scanf("%d",&n)==1)
    {
         stack<int>st;
    queue<int>q;
    priority_queue<int>pq;
        c1=0;
        c2=0;
        c3=0;
        p=0;
        for(int i=1;i<=n;i++)
        {

            scanf("%d%d",&a,&b);
            if(a==1)
            {
                st.push(b);
                q.push(b);
                pq.push(b);
            }
            if(a==2)
            {  p++;
                if(!st.empty() && st.top()==b  )
                {
                    c1++;
                    st.pop();
                }
                 if(!q.empty() &&  q.front()==b)
                {
                    c2++;
                q.pop();
                }

                 if(  !pq.empty() && pq.top()==b)
                {
                    c3++;
                    pq.pop();
                }

            }




        }
               if(c1!=p && c2!=p && c3!=p)
        {
            printf("impossible\n");
        }
         else if((c1==p && c2==p) || (c1==p && c3==p) || (c3==p && c2==p))
        {
            printf("not sure\n");
        }


        else if(c1==p)
        {
            printf("stack\n");
        }
        else if(c2==p)
        {
            printf("queue\n");
        }
        else if(c3==p)
        {
            printf("priority queue\n");
        }



    }
}
