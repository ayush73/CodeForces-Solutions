#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
#define elif else if
int main()
{
    ll n;
    cin>>n;
    vector<ll> v;
    rep(i,0,n)
    {
        ll k;cin>>k;v.push_back(k);
    }
    sort(v.begin(),v.end());
    ll q;
    cin>>q;
    while(q--)
    {
        ll bound;
        cin>>bound;
        auto upper=upper_bound(v.begin(),v.end(),bound);
        cout<<upper-v.begin()<<endl;
    }
    return 0;
}

