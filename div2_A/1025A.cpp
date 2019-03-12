#include<bits/stdc++.h>
typedef long long int ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define elif else if
#define pb push_back
#define mp make_pair
using namespace std;
map<ll,ll> mymap;
void solve()
{
    map<char,ll> mymap;
    ll n;
    cin>>n;
    string s;cin>>s;
    ll len=s.size();
    rep(i,0,len)
    {
        mymap[s[i]]++;
    }
    bool ok=false;
    for(auto it:mymap)
    {
        if(it.second>=2)
        {
            ok=true;
        }
    }
    if(len==1)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
    if(ok)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    }
    // that means that this number is apprached by the number k..
}
int main()
{
    solve();
    return 0;
}