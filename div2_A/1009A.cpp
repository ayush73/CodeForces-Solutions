#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(ll i=a;i<b;i++)
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
#define F first
#define S second
int main()
{
    ll n,m;
    cin>>n>>m;
    vector<ll> p;
    vector<ll> q;
    rep(i,0,n)
    {
        ll x;
        cin>>x; p.pb(x);
    }
    rep(i,0,m)
    {
        ll x;
        cin>>x; q.pb(x);
    }
    ll sum=0;
    rep(i,0,n)
    {
        if(p[i]<=q[0])
        {
            sum++;
            q.erase(q.begin(),q.begin()+1);
            if(q.size()==0)
            {
                break;
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}