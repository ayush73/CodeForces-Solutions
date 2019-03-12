#include<bits/stdc++.h>
#define elif else if
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define vi vector<ll>
typedef long long int ll;
#define all(x) (x).begin(),(x).end()
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
void solve()
{
    string s;
    cin>>s;
    set<char> st;
    st.insert(s[0]);
    st.insert(s[1]);
    bool ok=0;
    rep(i,0,5)
    {
        string g;cin>>g;
        ll len=g.size();
        rep(j,0,len){
            if(st.count(g[j])){
                ok=1;
            }
        }
    }
    if(ok)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    ll t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}