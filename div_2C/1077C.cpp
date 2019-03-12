#include<bits/stdc++.h>
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
void solve()
{
   ll n;
    cin>>n;
    vector<ll> v;
    ll sum=0;
    map<ll,ll> mymap;
    rep(i,0,n)
    {
        ll x;
        cin>>x;
        sum+=x;
        mymap[x]++;
        v.push_back(x);
    }
  //  exit(0);
    ll size=v.size();
    ll res=0;
    ll ans=0;
    vector<ll> res_pre;
   // exit(0);
    rep(i,0,n)
    {
        ll pre=sum-v[i];
        if(pre%2==0)
        {
        ll res=pre/2;
        if(mymap[res]>0)
        {
            //cout<<"val of res is"<<" "<<res<<endl;
            //cout<<"debug"<<" "<<res<<endl;
            if(mymap[res]==1)
            {
               if(v[i]==res)
               {
                   continue;
               }
            else
            {
                  ans++;
            res_pre.pb(i+1);
            }
            }
            else if(mymap[res]>1)
            {
            ans++;
            res_pre.pb(i+1);
            }
        }
        }
    }
    cout<<ans<<endl;
    ll size1=res_pre.size();
    rep(i,0,size1)
    {
        cout<<res_pre[i]<<" ";
    }
    cout<<endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll t=1;
 // cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}