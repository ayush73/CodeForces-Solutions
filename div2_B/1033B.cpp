#include<bits/stdc++.h>
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
bool is_prime(ll n){
    for(ll x = 2; x * x <= n; x++) if(n % x == 0) return 0;
    return 1;
}
bool checkPrime(ll n)
{
    ll x;
    for(x=2;x*x<=n;x++)
    {
        if(n%x==0){
            return 0;
        }
    }
    return 1;
}
void solve()
{
    ll a,b;
    cin>>a>>b;
    ll res=a-b;
    if(res!=1)
    {
        //cout<<"debug"<<endl;
        cout<<"NO"<<endl;
    }
    else
    {
        ll res=a+b;
        if(checkPrime(res))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
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