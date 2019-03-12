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
    ll a,b,k;
    cin>>a>>b>>k;
    ll res;
    if(k%2==0)
    {
        res=a*(k/2);
    }
    else
    {
        res=a*((k+1)/2);
    }
    //ll res=a*(k/2);
    ll res1=b*(k/2);
    if(res>res1)
    {
        cout<<res-res1<<endl;
    }
    else
    {
       // cout<<"debug"<<endl;
        cout<<-1*(res1-res)<<endl;
    }
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