#include<bits/stdc++.h>
using namespace std;
string a[10000];
int main()
{
    int n,c1,c2,pos1,pos2,q,pos,k,l,m,p,d1,d2;
    string s1,s2;
      scanf("%d",&n);
      for(int i=1;i<=n;i++)
      {
        cin>>a[i];

      }
      scanf("%d",&q);
      for(int j=1;j<=q;j++)
      {
          scanf("%d",&pos);
          if(a[pos]!="?")
          {
              cout<<a[pos]<<endl;
              continue;

          }

          c1=0;
          k=pos-1;
          d1=0;
          while(k>=1)
          {
 c1++;
              if(a[k]!="?")
              {
                   d1++;
                  s1+=a[k];
                  pos1=k;
                  break;

              }

              k--;
          }
           c2=0;
          l=pos+1;
          d2=0;



          while(l<=n )
          {

              c2++;

              if(a[l]!="?" )
              {
                  d2++;

                  s2+=a[l];
                  pos2=l;
                  break;
              }

              l++;
          }
          if(d2==0 && d1!=0)
          {
              for(int i=1;i<=c1;i++)
          {
              cout<<"right of ";
          }
          cout<<s1<<endl;
          }
          else if(d1==0 && d2!=0)
          {
               for(int i=1;i<=c2;i++)
          {
              cout<<"left of ";
          }
          cout<<s2<<endl;
          }



         else if(c1==c2 )
          {
              cout<<"middle of "<<s1<<" and "<<s2<<endl;

          }


          else if(c1<c2)
          {


          for(int i=1;i<=c1;i++)
          {
              cout<<"right of ";
          }
          cout<<s1<<endl;


          }
          else
          {
          for(int i=1;i<=c2;i++)
          {
              cout<<"left of ";
          }
          cout<<s2<<endl;

          }


                  s1.clear();
          s2.clear();



      }
}


