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
   ll n,s;
    cin>>n>>s;
    ll k=s/n;
    if(s%n==0)
    {
        //cout<<"debug"<<endl;
        cout<<k<<endl;
    }
    else
    {
        cout<<k+1<<endl;
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