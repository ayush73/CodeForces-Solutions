#include<bits/stdc++.h>
#define elif else if
#define pb push_ack
#define mp make_pair
#define f first
#define s s second
typedef long long int ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
void solve()
{
  ll n,k;
  cin>>n>>k;
  vector<pair<ll,ll>> v;
  rep(i,0,n)
  {
      ll x;
      cin>>x;
      v.push_back(make_pair(x,i+1));
  }
  sort(v.begin(),v.end());
  ll size=v.size();
  ll sum=0;
    vector<ll> w;
    bool ok=0;
    ll count=0;
  rep(i,0,size)
 {
     sum+=v[i].first;
     if(sum>k)
     {
         break;
     }
     else
     {
         ok=1;
         count++;
         w.push_back(v[i].second);
        // cout<<v[i].second<<" ";
     }
 }
    if(!ok)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<count<<endl;
        ll size1=w.size();
        rep(i,0,size1)
        {
          cout<<w[i]<<" ";
        }
        cout<<endl;
    }
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