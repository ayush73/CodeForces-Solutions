

#include<bits/stdc++.h>
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll s,n;
    cin>>s>>n;
    vector<pair<ll,ll>> v;
    while(n--)
    {
        ll x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    ll size=v.size();
    bool ok=0;
    rep(i,0,size)
    {
        if(v[i].F < s){
            s+=v[i].S;
        }else{
            s=s-v[i].F;
        }
    }
   // cout<<s<<endl;
    if(s>0){
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}