#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q,p,n,n1,marks,c,k;
    int cb,correct;
    char s1[10000];
    string s;
    while(scanf("%s%d",s1,&q)==2)
    {
        k=0;
        if(s1[0]=='0' && q==0)
        {
            break;
        }
        marks=0;
        if(s1[0]=='0' && s1[1]=='x')
        {
            sscanf(s1,"%X",&n);
        }
        else if(s1[0]=='0')
        {
            sscanf(s1,"%o",&n);

        }
        else
        {
            sscanf(s1,"%d",&n);
        }



        for(int j=1; j<=q; j++)
        {


            cin>>s;
            cin>>n1;


        if(s=="++i")
        {
            n++;
            if(  n1==n)
            {

                marks++;
            }
            else{
                n=n1;
            }
        }
 else if(s=="--i")
        {
            n--;
            if(  n1==n)
            {

                marks++;
            }
            else{
                n=n1;
            }
        }
          else if(s=="i++")
        {

            if(  n1==n)
            {

                marks++;
            }
            else{
                n=n1;
            }
            n++;
        }
          else if(s=="i--")
        {

            if(  n1==n)
            {

                marks++;
            }
            else{
                n=n1;
            }
            n--;
        }
        else if(s=="i")
            {


            if(  n1==n)
            {

                marks++;
            }
            else{
                n=n1;
            }
        }






        }



        cout<<marks<<endl;

        s.clear();
    }
}
