#include<bits/stdc++.h>
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin>>n;
    vector<ll> v;
    rep(i,0,n)
    {
        ll x;
        cin>>x;
        v.pb(x);
    }
    sort(v.begin(),v.end());
    ll size=v.size();
    map<ll,ll> mymap;
    rep(i,0,n)
    {
        mymap[v[i]]++;
    }
    ll ans=INT_MIN;
    for(auto it:mymap)
    {
        ans=max(ans,it.second);
    }
    cout<<ans<<endl;
    return 0;
}