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
    rep(i,0,n)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    ll size=v.size();
    map<ll,ll> mymap;
    set<ll> s;
    ll dp[size];
    memset(dp,0,sizeof(dp));
    s.insert(v[size-1]);
    for(ll i=size-2;i>=0;i--)
    {
       //s.insert(v[i]);
        dp[i]=s.size();
        s.insert(v[i]);
    }
    /*
    cout<<"*****"<<endl;
    cout<<"final value of the array is"<<endl;
    rep(i,0,size)
    {
        cout<<dp[i]<<" ";
    }
    cout<<endl;
    cout<<"*******"<<endl;
    */
    ll sum=0;
    rep(i,0,size-1)
    {
        mymap[v[i]]++;if(mymap[v[i]]==1){
            sum+=dp[i];
        }else if(mymap[v[i]]){
            continue;
        }
    }
    /*for(ll i=0;i<size-1;i++)
    {
        mymap[v[i]]++;
        if(mymap[v[i]]==1)
        {
            sum+=dp[i];
        }
        else if(mymap[v[i]])
        {
            continue;
        }
      //  cout<<"val of sum is"<<" "<<sum<<endl;
    }*/
    cout<<sum<<endl;
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
  return 0;
}