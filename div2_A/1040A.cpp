#include<bits/stdc++.h>
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
void solve()
{
    ll n,a,b;
    cin>>n>>a>>b;
    vector<ll> v;
    ll c=0;
    rep(i,0,n)
    {
        ll x;
        cin>>x;
        v.pb(x);
        if(x==2){
            c++;
        }
    }
    ll sum=0;
    map<ll,ll> mymap;
    mymap.insert(make_pair(0,a));
    mymap.insert(make_pair(1,b));
    bool ok=false;ll size=v.size();
    ll pre=size/2;
    rep(i,0,pre){
        if(v[i]!=v[size-i-1] && v[i]!=2 && v[size-i-1]!=2){
            ok=true;
            break;
        }
        else if(v[i]==2 && v[size-i-1]==2)
        {
            ll pre=min(a,b);
            sum+=2*pre;
        }
        else if(v[i]==2&&v[size-i-1]!=2 || v[i]!=2&&v[size-i-1]==2)
        {
            if(v[i]==2)
            {
                ll op=v[size-i-1];
                sum+=mymap[op];
            }
            else if(v[size-i-1]==2)
            {
                ll op=v[i];
                sum+=mymap[op];
            }
        }
    }
    if(v[pre]==2 && n%2!=0){
       // cout<<"debug"<<endl;
        sum+=min(a,b);
    }
    if(ok){
        cout<<-1<<'\n';
    }
    else
    {
        if(c==n){
            cout<<n*min(a,b)<<endl;
        }else{
            cout<<sum<<endl;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    solve();
    return 0;
}