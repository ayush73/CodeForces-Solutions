#include<bits/stdc++.h>
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
ll checkPrime(ll n)
{
   // cout<<"val of n is"<<" "<<n<<endl;
    ll x,res;
    bool ok=0;
    for(x=2;x*x<=n;x++)
    {
        if(n%x==0){
            res=x;
            ok=1;
            //cout<<"debug"<<endl;
           // cout<<"****"<<" "<<x<<endl;
            break;
        }
    }
    if(ok){
        return res;
    }
    return n;
}
void solve1()
{
    ll n;
    cin>>n;
    ll pre=checkPrime(n);
    if(pre==n)
    {
        cout<<1<<endl;
    }
    else
    {
       cout<<2<<endl;
    }
}
void solve()
{
    ll n;
    cin>>n;
    ll pre=checkPrime(n);
    //we have calculated the smalest prime factor...
    if(pre==n)
    {
        cout<<1<<endl;
    }
    else
    {
    if(pre%2!=0){
      ll c=1;
        n=n-pre;
        ll g=n/2;
        c+=g;
        cout<<c<<endl;
    }if(pre%2==0){
        //cout<<"debug"<<endl;
        ll div=n/pre;
        cout<<div<<endl;
    }
    }
    //cout<<pre<<endl;
    //if(pre>0)
    //ll div=n/pre;
    //cout<<div<<endl;
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