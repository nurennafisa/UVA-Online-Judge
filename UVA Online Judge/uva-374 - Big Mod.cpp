#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mods (ll n , ll p , ll m)
{
    if(p == 0)
        return 1;
    if(p % 2 == 0)
    {
        ll ret = mods(n, p/2,m);
        return ((ret % m) * (ret % m)) % m;
    }
    else
        return ((n % m) * (mods(n ,p -1,m) % m) ) % m;
}
int main()
{
   ll n, p, m;

   while(cin >> n >> p >> m)
   {

       ll ans = mods(n,p,m);
       cout<< ans << endl;


   }

}


