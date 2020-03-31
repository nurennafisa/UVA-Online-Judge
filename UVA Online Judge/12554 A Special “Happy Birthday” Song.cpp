#include<bits/stdc++.h>
using namespace std;
  map<int,string>v1,v2;
  int visited[1000];

int main()
{
    int n,j,f;
    string s;
     v1[0]="Happy";
    v1[1]="birthday";
     v1[2]="to";
    v1[3]="you";

    v1[4]="Happy";
    v1[5]="birthday";
     v1[6]="to";
    v1[7]="you";

    v1[8]="Happy";
    v1[9]="birthday";
     v1[10]="to";
    v1[11]="Rujia";

      v1[12]="Happy";
    v1[13]="birthday";
     v1[14]="to";
    v1[15]="you";
scanf("%d",&n);
getchar();
for(int k=0;k<n;k++)
{
    cin>>s;
    v2[k]=s;
    s.clear();
}
j=0;
f=0;
for(int i=0;i<v1.size();i++)
{

    cout<<v2[j]<<": "<<v1[i]<<endl;
    if(j==(n-1) && (i!=(v1.size()-1)))
    {
        j=-1;
    }
    if((i==v1.size()-1)&& (f<n))
    {
        i=-1;

    }
    f++;

    j++;
}
    s.clear();
    v2.clear();

    return 0;
}
