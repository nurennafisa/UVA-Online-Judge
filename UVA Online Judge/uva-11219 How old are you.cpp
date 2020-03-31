#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    int d1,d2,m1,m2,y1,y2,test,y;
    while(scanf("%d",&test)==1)
    {
        for(int i=1;i<=test;i++)
        {
            scanf("%d/%d/%d",&d1,&m1,&y1);
        scanf("%d/%d/%d",&d2,&m2,&y2);
        printf("Case #%d: ",i);
        y=y1-y2;
        if(m1<m2)
        {
            y--;
        }
        else if(m1==m2)
        {
            if(d1<d2)
            {
                y--;
            }
        }
        if(y>130)
            cout<<"Check birth date"<<endl;
        else if(y<0)
            cout<<"Invalid birth date"<<endl;
        else
            cout<<y<<endl;
        }
    }


    return 0;
}






