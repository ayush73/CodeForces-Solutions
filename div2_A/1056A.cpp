#include<bits/stdc++.h>
typedef long long int ll;
#define elif else if 
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
void ssolve()
{
    ll n;
    map<ll,ll> mymap;
    cin>>n;
    ll c=n;
    //cout<<n<<endl;
    rep(i,0,n)
    {
        ll k;
        cin>>k;
        
        vector<ll> v;
        rep(i,0,k)
        {
            ll x;
            cin>>x;
            mymap[x]++;
        }
    }
    for(auto it:mymap)
    {
        if(it.second==n)
        {
            cout<<it.first<<" ";
        }
       // cout<<endl;
    }
    cout<<endl;
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
    ssolve();
  }
  return 0;
}