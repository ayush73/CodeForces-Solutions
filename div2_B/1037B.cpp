#include<bits/stdc++.h>
#define elif else if
#define pb push_back
#define mp make_pair
#define F first
#define S second
typedef long long int ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll> v;
    rep(i,0,n)
    {
        ll x;
        cin>>x;
        v.pb(x);
    }
    ll sum=0;
    sort(v.begin(),v.end());
    ll size=v.size();
    ll pre=size/2;
    ll res=v[pre];
    for(ll i=pre-1;i>=0;i--)
    {
        if(v[i]>k)
        {
            ll def=v[i]-k;
            sum+=def;
            v[i]=k;
        }
        else
        {
            continue;
        }
    }
    ll defbro=abs(v[pre]-k);
    sum+=defbro;
    rep(i,pre+1,size)
    {
        if(v[i]<k)
        {
            ll defportugal=k-v[i];
            sum+=defportugal;
        }
    }
    cout<<sum<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}