#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define elif else if
#define pb push_back
#define mp make_pair
#define elif else if
typedef long long int ll;
ll solve()
{
    vector<ll> v;
    ll n,k,count=0;
    cin>>n>>k;
    map<ll,ll> mymap;
    rep(i,0,n)
    {
        ll z;
        cin>>z;
        v.pb(z);
        mymap[z]++;
    }
    sort(v.begin(),v.end());
    rep(i,0,n-1)
    {
        if(v[i]+k>=v[i+1] && v[i+1]>v[i])
        {
            count+=mymap[v[i]];
        }
    }
    return n-count;
}
int main()
{
   // cin>>n>>m>>a>>b;
    cout<< solve() <<'\n';
}