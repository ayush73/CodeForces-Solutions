#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define mod 1e9+7
int main()
{
    ll n;
    cin>>n;
    vector<ll> v;
    ll miny=INT_MAX;
    ll maxy=INT_MIN;
    set<ll> s;
    rep(i,0,n)
    {
        ll x;
        cin>>x;
        v.pb(x);
        s.insert(x);
        miny=min(miny,v[i]);
        maxy=max(maxy,v[i]);
    }
    ll bool_pre=s.size();
    if(bool_pre==1||bool_pre==2){
        cout<<"YES"<<endl;
    }else
    {
    ll average=(miny+maxy)/2;
//    cout<<"average is"<<" "<<average<<endl;
    ll def=abs(average-miny);
    ll size=v.size();
    rep(i,0,size)
    {
        if(v[i]<average){
            v[i]+=def;
        }elif(v[i]==average){
            continue;
        }else{
            v[i]-=def;
        }
    }
    /*cout<<"yooooo"<<endl;
    rep(i,0,size)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;*/
    bool okay=false;
    rep(i,0,size-1){
        if(v[i]!=v[i+1]){
            okay=true;
        }
    }
    if(!okay)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    }
    return 0;
    //cout<<n-pre.size()<<endl;
}