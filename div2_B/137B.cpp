#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define mod 1e9+7
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
void solve()
{
   ll n;
    cin>>n;
    ll i,a[n];
    set<ll> s;
    rep(i,0,n)
    {
      cin>>a[i];
       if(a[i]>=1 && a[i]<=n)
       {
           s.insert(a[i]);
       }
    }
   cout<<n-s.size()<<endl;
}
int main()
{
   /* ll t;
    cin>>t;
    while(t--)
    {  */
        solve();
       //cout<<solve()<<'\n';
   // }
    return 0;
}