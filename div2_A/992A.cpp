#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define elif else if
#define pb push_back
#define mp make_pair
typedef long long int ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define f first
#define s second
void solve()
{
    ll n;
    cin>>n;
    ll i,a[n];
    set<ll> s;
    rep(i,0,n)
    {
        ll x;
        cin>>x;
        if(x!=0)
        s.insert(x);
    }
    cout<<s.size()<<endl;
}
int main()
{
    solve();
  
    return 0;
}