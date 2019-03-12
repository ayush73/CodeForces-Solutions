#include<bits/stdc++.h>
#define elif else if
#define pb push_back
#define mp make_pair
#define f first
#define s second
typedef long long int ll;
#define cerr A
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
void pre(){
    
}
void solve()
{
    ll n;
    cin>>n;
    vector<ll>v;
    rep(i,0,n)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    ll size=v.size();
    sort(v.begin(),v.end());
    ll mag=size-1;
    ll pre=0;
    ll def=n/2;
    ll sum=0;
    rep(i,0,def)
    {
        ll game=v[pre];
        ll game1=v[mag];
        pre++;
        mag--;
        ll res1=game+game1;
        res1=res1*res1;
        sum+=res1;
    }
    cout<<sum<<endl;
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