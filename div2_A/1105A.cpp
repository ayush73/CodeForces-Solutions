#include<bits/stdc++.h>
#define elif else if 
#define pb push_back
#define mp make_pair
#define f first
#define s second
typedef long long int ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    map<ll,ll> mymap;
    vector<ll> v;
    rep(i,0,n)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    ll size=v.size();
    const ll maxy=100;
    ll counter=0;
    ll ans=INT_MAX;
    pair<ll,ll> faf;
    ll p=0;
    ll sum=INT_MAX;
  /*  rep(i,1,maxy+1)
    {
        ll sum=-1;
        bool ok=0;
        ll count=0;
        rep(j,0,size)
        {
            //cout<<"bool issues"<<v[j]<<endl;
            count++;
            ll def=abs(v[j]-i);
            if(def<=1)
            {
                continue;
            }
            if(def>1)
            {
                def--;
                sum+=def;
            }
            if(i==3)
            {
              cout<<sum<<endl;
            }
        }
        if(i==3)
        {
           // cout<<count<<endl;
        }
        if(sum<ans)
        {
            ans=sum;
            p=i;
        }
        if(i==3)
        cout<<"val of sum is"<<" "<<sum<<endl;
    }
    */
    rep(i,1,maxy+1)
    {
        ll sum=0;
        rep(j,0,size)
        {
            ll def=abs(v[j]-i);
            if(def<=1)
            {
                continue;
            }
            else
            {
                def--;
                sum+=def;
            }
        }
        if(sum<ans)
        {
            ans=sum;
            p=i;
        }
    }
    cout<<p<<" "<<ans<<endl;
    //cout<<p<<" "<<ans<<endl;
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
        solve();
    }
    return 0;
}