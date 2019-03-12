#include<bits/stdc++.h>
#define rep(i,a,b) for(ll i=a;i<b;i++)
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
#define F first
#define S second
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    set<ll> s;
    while(n--)
    {
        ll x,y;
        cin>>x>>y;
        rep(i,x,y+1)
        {
            s.insert(i);
        }
    }
    ll v=0;
    vector<ll> pre;
    rep(i,1,m+1)
    {
        if(s.count(i))
        {
            continue;
        }
        else
        {
            //v++;
            pre.pb(i);
        }
    }
    ll size=pre.size();
    cout<<size<<endl;
    rep(i,0,size)
    {
        cout<<pre[i]<<" ";
    }
    cout<<endl;
    
    //cout<<v<<endl;
    return 0;
}