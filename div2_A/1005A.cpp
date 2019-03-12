#include<bits/stdc++.h>
using namespace std;
#define elif else if
#define pb push_back
#define mp make_pair
typedef long long int ll; 
#define rep(i,a,b) for(ll i=a;i<b;i++)
void solve()
{
    ll n;
    cin>>n;
    ll i;
    vector<ll> v;
    rep(i,0,n)
    {
        ll x;
        cin>>x;
        v.pb(x);
    }
    ll sum=0;
    ll c=0;
    vector<ll> alpha;
    rep(i,0,n)
    {
        if(v[i]==1)
        {
            sum++;
            alpha.pb(i);
        }
    }
    ll size=alpha.size();
    cout<<sum<<endl;
    rep(i,1,size)
    {
        cout<<v[alpha[i]-1]<<" ";
    }
    cout<<v[n-1];
    cout<<endl;
}
int main()
{
   // ll t;
   // cin>>t; 
   // while(t--)
   // {
      solve();
   // }
    return 0;
}

