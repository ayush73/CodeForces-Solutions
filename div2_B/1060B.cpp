#include<bits/stdc++.h>
#define elif else if
#define pb push_back
#define mp make_pair
#define F first
#define S second
typedef long long int ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    if(n<=9){
        cout<<n<<endl;
    }
    else
    {
    ll p=n;
    ll x=0;
    while(p!=0){
        x++;
        p=p/10;
    }
    ll res=pow(10,x-1);
    ll k=res-1;
    ll sig=n-k;
    ll sum1=0,sum2=0;
    while(k!=0){
        ll a=k%10;
        sum1+=a;
        k=k/10;
    }
    while(sig!=0){
        ll a=sig%10;
        sum2+=a;
        sig=sig/10;
    }
    cout<<sum1+sum2<<endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
  //  ll t;
   // cin>>t;
   // while(t--)
   // {
        solve();
  //  }
    return 0;
}