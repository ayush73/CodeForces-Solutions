#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define elif else if
#define pb push_back
#define mp make_pair
int main()
{
   ll y;
    cin>>y;
    ll n=y/2;
    vector<ll> v;
    rep(i,0,n)
    {
        ll z;cin>>z;
        v.pb(z);
    }
    ll x=1,sum=0;
    ll sum1=0;
    ll xx=2;
    sort(v.begin(),v.end());
    rep(i,0,n)
    {
        sum+=abs(v[i]-x);
        sum1+=abs(v[i]-xx);
        x=x+2;
        xx=xx+2;
    }
    cout<<min(sum,sum1)<<endl;
    return 0;
}