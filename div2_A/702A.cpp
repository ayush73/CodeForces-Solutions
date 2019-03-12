#include<bits/stdc++.h>
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define cerr A
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
typedef vector<ll> vi;
void solve()
{
   ll n,k;
   cin>>n;
   vi v;
   ll counter=1;
   rep(i,0,n)
   {
    ll x;
    cin>>x;
    v.pb(x);
   }
   ll ans=INT_MIN;
   ll size=v.size();
   rep(i,0,size-1)
   {
       if(v[i]<v[i+1])
       {
           counter++;
           ans=max(ans,counter);
       }
       else
       {
           ans=max(ans,counter);
           counter=1;
           ans=max(ans,counter);
       }
   }
    
    if(ans==INT_MIN)
    {
        cout<<1<<endl;
    }
    else if(ans>INT_MIN)
    {
        cout<<ans<<endl;
    }
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