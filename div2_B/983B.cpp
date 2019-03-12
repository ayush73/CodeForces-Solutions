#include<bits/stdc++.h>
#define elif else if 
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define cerr A
#define mod 1e9+7
typedef long long int ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
void solve()
{
  ll n;cin>>n;
  ll i,a[n];
  ll dp[n][n];
  rep(i,0,n)
  {
    cin>>a[i];
    dp[0][i]=a[i];
  }
  for(int i=1;i<n;i++)
  {
    for(int j=0;j<=n-i;j++)
    {
     dp[i][j]=dp[i-1][j+1] ^ dp[i-1][j];
    }
  }
  for(int i=1;i<n;i++)
  {
     for(int j=0;j<n-i;j++)
     {
       dp[i][j]=max({dp[i][j],dp[i-1][j],dp[i-1][j+1]});
     }
  }
  ll query;cin>>query;
  while(query--)
  {
    ll l,r;cin>>l>>r;
    l--;
    ll len=r-l-1;
    cout<<dp[len][l]<<endl;
  }
  // creating the dp state....
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