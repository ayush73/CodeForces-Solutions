#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define elif else if
#define pb push_back
#define mp make_pair
typedef long long int ll; 
const ll MAX=1e9+1;
void solve()
{
    ll m,n;
    cin>>m>>n;
    vector<ll> v;
    vector<ll> w;
    rep(i,0,m)
    {
        ll x;cin>>x;
        v.pb(x);
    }
    map<ll,ll> mymap;
    rep(i,0,n)
    {
        ll x;
        cin>>x;w.pb(x);
        mymap[x]++;
    }
    rep(i,0,m)
    {
        if(mymap[v[i]]>0)
        {
            cout<<v[i]<<" ";
        }
    }
}
int main()
{

       solve();

}