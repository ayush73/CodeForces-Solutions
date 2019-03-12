#include<bits/stdc++.h>
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
void solve()
{
   ll n;
   cin>>n;
   vector<ll> v;
    v.pb(0);
   rep(i,0,n)
   {
    ll x;
    cin>>x;
    v.pb(x);
   }
    v.pb(1001);
   ll size=v.size();
   // v.pb(1001);
   ll ans=0,cur=1;
   rep(i,1,size)
   {
     if(v[i]==1+v[i-1])
     {
      cur++;
      ans=max(ans,cur-2);
     }
     else
     {
      cur=1;
     // ans=max(ans,cur-2);
     }
   }
   cout<<ans<<endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll t=1;
  //cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}