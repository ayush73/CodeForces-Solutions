#include<bits/stdc++.h>
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define cerr A
using namespace std;
void solve()
{
   ll n,m;
   cin>>n;
   vector<ll> a,b;
   ll sum1=0,sum2=0;
   rep(i,0,n)
   {
       ll x;
       cin>>x;
       a.pb(x);
       sum1+=x;
   }
   cin>>m;
   ll size=a.size();
   rep(i,0,m)
   {
       ll x;
       cin>>x;
       b.pb(x);
       sum2+=x;
   }
   if(sum1!=sum2)
   {
       cout<<-1<<endl;
   }
   else if(sum1==sum2)
   {
      ll ans=0;
      int res=0;
      int i=0,j=0;
      while(1)
      {
          if(i>n-1 or j>m-1)
          {
              break;
          }
          else
          {
              if(a[i]==b[j]){
                  ans++;
                  i++;j++;
              }if(a[i]>b[j]){
                  if(j+1<=m-1){
                      b[j+1]+=b[j];
                      j++;
                  }
              }if(a[i]<b[j]){
                  if(i+1<=n-1){
                      a[i+1]+=a[i];
                      i++;
                  }
              }
          }
          //cout<<ans<<endl;
      }
      cout<<ans<<endl;
   }
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