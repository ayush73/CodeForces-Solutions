#include<bits/stdc++.h>
#define elif else if
#define pb push_back
#define mp make_pair
#define f first
#define s second
typedef long long int ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
void solve()
{
   ll n,k;
   cin>>n>>k;
    ll pre=n/k;
  //  cout<<"val of pre is"<<" "<<pre<<endl;
    if(pre%2!=0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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