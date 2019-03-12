#include<bits/stdc++.h>
#define elif else if
#define pb push_back
#define mp make_pair
#define F first
#define S second
typedef long long int ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
const ll MAX=123456;
#define endl '\n'
ll parent[MAX],size[MAX];
vector<pair<pair<ll,ll>,ll>> vres;
int main()
{
    ll vertex,edges,stations;
    cin>>vertex>>edges>>stations;
    vector<pair<pair<ll,ll>,ll>> vres;
    rep(i,0,edges)
    {
        ll x,y,z;
        cin>>x>>y>>z;
        vres.push_back(make_pair(make_pair(x,y),z));
    }
    set<ll> s;
    if(stations>0)
    {
        while(stations--)
        {
            ll reg;cin>>reg;
            s.insert(reg);
        }
    }
    ll ans=INT_MAX;
    ll size=vres.size();
    rep(i,0,size)
    {
    // this is done due to the fact that only source and sink contact...
        // not 2 sources contact with each other.....
        ll val1=vres[i].first.first;
        ll val2=vres[i].first.second;
        if( (!s.count(val1)&&s.count(val2)) || (s.count(val1)&&!s.count(val2)) )
        {
           ans=min(ans,vres[i].second);
        }
        else
        {
            continue;
        }
    }
           if(ans==INT_MAX)
           {
               cout<<-1<<endl;
           }
           else
           {
               cout<<ans<<endl;
           }
    return 0;
}