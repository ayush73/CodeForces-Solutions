#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define elif else if
#define pb push_back
#define mp make_pair
#define F first
#define S second
int main()
{
    ll n,k;
    cin>>n;
    vector<ll> v;
    ll ans=INT_MIN;
    map<ll,ll> mymap;
    rep(i,0,n)
    {
        ll x;
        cin>>x;
        v.pb(x);
    }
    ll size=v.size();
   
    rep(i,0,size)
    {
        if(v[i]%2==0)
        {
            cout<<v[i]-1<<" ";
        }
        else
        {
            cout<<v[i]<<" ";
        }
    }
    return 0;
}