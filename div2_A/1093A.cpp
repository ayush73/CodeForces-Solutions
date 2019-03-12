#include<bits/stdc++.h>
#define elif else if 
#define pb push_back
#define mp make_pair
#define F first
#define S second
using namespace std;
typedef long long int ll;
const ll mod=1e9+7;
#define rep(i,a,b) for(ll i=a;i<b;i++)
//ll dp[200000];
void solve()
{
  ll n;
  cin>>n;
  ll x=0;
  ll pre=n/7;
  if(n%7!=0){
      x=1;
  }
 // cout<<"val of pre is"<<" "<<pre<<endl;
  cout<<pre+x<<endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll t;
  cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}