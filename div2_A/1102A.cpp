#include<bits/stdc++.h>
#define elif else if
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define vi vector<ll>
typedef long long int ll;
#define all(x) (x).begin(),(x).end()
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
void solve()
{
    ll n;
    cin>>n;
  //  vector<ll> n;
    ll res=n*(n+1);res/=2;
    if(res%2==0)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<1<<endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    ll t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

