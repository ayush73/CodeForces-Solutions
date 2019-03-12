#include<bits/stdc++.h>
#define elif else if 
#define pb push_back
#define mp make_pair
#define f first
#define s second
typedef long long int ll;
#define all(x) (x).begin(),(x).end()
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
void solve()
{
    ll n;cin>>n;
    if(n%2==0)
    {
        ll def=n/2;
        cout<<def<<endl;
        rep(i,0,def)
        {
            cout<<2<<" ";
        }
        cout<<endl;
    }
    else
    {
        ll def=n/2;
        cout<<def<<endl;
        rep(i,0,def-1)
        {
            cout<<2<<" ";
        }
        cout<<3;
        cout<<endl;
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