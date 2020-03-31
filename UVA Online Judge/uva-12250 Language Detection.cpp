#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,i;
    string s;
    i=0;
    while(cin>>s)
    {
             i++;
            if(s=="#")
            {
                break;
            }
            else if(s=="HELLO")
            {
                printf("Case %d: ENGLISH\n",i);
            }
              else if(s=="HOLA")
            {
                printf("Case %d: SPANISH\n",i);
            }
              else if(s=="HALLO")
            {
                printf("Case %d: GERMAN\n",i);
            }
              else if(s=="BONJOUR")
            {
                printf("Case %d: FRENCH\n",i);
            }
              else if(s=="CIAO")
            {
                printf("Case %d: ITALIAN\n",i);
            }
              else if(s=="ZDRAVSTVUJTE")
            {
                printf("Case %d: RUSSIAN\n",i);
            }
              else
            {
                printf("Case %d: UNKNOWN\n",i);
            }

             s.clear();

        }



   return 0;
}

