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
   ll l1,r1,l2,r2;
   cin>>l1>>r1>>l2>>r2;
   ll a=l1;
    ll b=l2;
    ll r=l2;
    bool ok=0;
    if(a==b){
        r=l2+1;
        if(r<=r2){
            ok=1;
        }
    }
    cout<<l1<<" "<<r<<endl;
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