#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int prime[1005] , nPrime;
int mark[1005];
int c1;
void sieve(int n)
{
    int i , j , limit = sqrt(n * 1.) + 2;
prime[nPrime++] = 1;
c1++;
    for(int i = 4; i <= n; i += 2)
        mark[i] = 1;
    prime[nPrime++] = 2;
    c1++;

    for(i = 3; i <= n; i++)
    {
        if(!mark[i])
        {
            prime[nPrime++] = i;
            c1++;
            if(i <= limit)
            {
                for(j = i * i; j <= n; j+= i * 2)
                {
                    mark[j] = 1;
                }
            }
        }
    }
}
int main()
{

int n,c,c2,p,f=0,pos,i,j;
while(scanf("%d%d",&n,&c)==2)
{
 if(n==1)
 {
     prime[0]=1;
 }
else if(n==2)
 {
     prime[0]=1;
       prime[1]=2;
 }
 else
sieve(n);
if(f)
{
    printf("\n");
}
f=1;
if(c1%2==0)
{
    p=2*c;

}
else{
    p=(2*c)-1;

}
if(n%2==0)
{
    pos=((c1-(2*c))/2)-1;
}
else{
    pos=(c1-(2*c))/2;
}
printf("%d %d: ",n,c);
if(p<=c1)
{

c2=0;
for(i=pos+1;c2<p-1;i++)
{
    c2++;
    printf("%d ",prime[i]);
}


  printf("%d\n",prime[i]);

}
else{
    for(j=0;j<c1-1;j++)
{

    printf("%d ",prime[j]);
}
   printf("%d\n",prime[j]);
}
c1=0;
p=0;
memset(prime,0,sizeof prime);
memset(mark,0,sizeof mark);
nPrime=0;

}
}
