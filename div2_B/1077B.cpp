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
    rep(i,0,n)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    ll size=v.size();
    ll res=0;
    rep(i,1,size-1)
    {
        if(v[i-1]==1 and v[i+1]==1 and v[i]==0)
        {
            //cout<<i+1<<" ";
            res++;
            v[i+1]=0;
        }
           // res++;
    }
   // cout<<endl;
    cout<<res<<endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll t=1;
 // cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}