#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define pb push_back
#define mp make_pair
#define elif else if
typedef pair <ll,ll> pi;
int main()
{
    set <pair<ll,ll>> s;
    ll n,i;
    cin>>n;
    rep(i,0,n)
    {
        ll z;cin>>z;
        s.insert(make_pair(z,i));
    }
    string ss;
    cin>>ss;
    ll size_beta=ss.size();
    vector <pair<ll,ll>> ans;
    vector <ll> victor;
    rep(i,0,size_beta)
    {
        if(ss[i]=='0')
        {
            // introvert
          //  ll Q=v[0].second;//not so khool
            pi temp=*(s.begin());
            ll Q=temp.second;
            s.erase(s.begin());
            ans.pb(mp(i,Q));
            victor.pb(Q);
           // v.erase(v.begin(),v.begin()+1);
            
        }
        elif(ss[i]=='1')
        {
            // extrovert
            ll z=victor[victor.size()-1];
            ans.pb(mp(i,z));
            victor.pop_back();
        }
    }
    ll draco=ans.size();
    rep(i,0,draco)
    {
        cout<<ans[i].second+1<<" ";
    }
    
    return 0;
}