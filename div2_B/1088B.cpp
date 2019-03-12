#include<bits/stdc++.h>
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define cerr A
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
typedef vector<ll> vi;
void solve()
{
   ll n,k;
   cin>>n;
   vi v;
   ll counter=1;
   rep(i,0,n)
   {
    ll x;
    cin>>x;
    v.pb(x);
   }
    map<ll,ll> mymap;
    ll size=v.size();
    ll ans=0;
    rep(i,0,size)
    {
        rep(j,0,32)
        {
            ans+=mymap[(1LL<<j)-v[i]];
        }
        mymap[v[i]]++;
    }
    cout<<ans<<endl;
  // cout<<endl;
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