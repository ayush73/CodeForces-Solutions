#include<bits/stdc++.h>
#define elif else if
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define cerr A
#define all(x) (x).begin(),(x).end()
typedef long long int ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    set<ll> s;
    vector<ll> v;
    map<ll,ll> mymap;
    rep(i,0,n)
    {
        ll x;
        cin>>x;
        s.insert(x);
        v.push_back(x);
        mymap[x]++;
    }
    sort(all(v));
    ll size=v.size(); 
    cout<<v[size-1]<<" ";
   // mymap[v[size-1]]--;
    // first find all the factors of v[size-1] ........
    map<ll,ll> mymap1;
    set<ll> st;
    // now this set contains the factors of the largest number in the array....
    rep(i,0,size)
    {
        if(st.count(v[i]))
        {
            continue;
        }
        else if(!(st.count(v[i])) and v[size-1]%v[i]==0)
        {
            st.insert(v[i]);
        }
    }
    vector<ll> w;
    rep(i,0,size)
    {
        if(st.count(v[i]) and mymap[v[i]]==1)
        {
            continue;
        }
        else if(st.count(v[i]) and mymap[v[i]]>1)
        {
            mymap[v[i]]=mymap[v[i]]-1;
            w.push_back(v[i]);
        }
        else if(!st.count(v[i]))
        {
            w.push_back(v[i]);
        }
    }
    sort(all(w));
    ll size1=w.size();
    cout<<w[size1-1]<<" ";
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
}