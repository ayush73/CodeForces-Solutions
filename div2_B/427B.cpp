#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define rep(i,a,b) for(ll i=a;i<b;i++)
int main()
{
    ll n,t,c;
    cin>>n>>t>>c;
    ll i,a[n];
    ll count=0;
    ll ans=0;
    rep(i,0,n)
    {
        cin>>a[i];
        if(a[i]<=t)
        {
            count++;
        }
        else
        {
            count=0;
        }
        if(count>=c)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}