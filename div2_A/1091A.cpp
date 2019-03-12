#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define elif else if
#define pb push_back
#define f first
#define s second
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define mp make_pair
#define vi vector <ll>
#define cerr A
const ll mod=1000000007;
const ll MAX=1234;
void solve()
{
    ll y,b,r;
    cin>>y>>b>>r;
    ll ans=0;
    rep(i,1,y+1)
    {
        ll res=i+1;
        ll pre=i+2;
        if(res<=b and pre<=r){
            ll k=res+pre+i;
            ans=max(ans,k);
        }
    }
    cout<<ans<<endl;
}
int main()
{
    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}