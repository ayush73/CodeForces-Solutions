#include<bits/stdc++.h>
typedef long long int ll;
#define pb push_back
using namespace std;
int main()
{
    ll p,q,r;
    cin>>p>>q>>r;
    vector<ll> v;
    v.pb(p);
    v.pb(q);
    v.pb(r);
    sort(v.begin(),v.end());
    ll size=v.size();
    ll pre=v[0]+v[1];
    ll def=v[2]-pre;
    if(def<0)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<def+1<<endl;
    }
}