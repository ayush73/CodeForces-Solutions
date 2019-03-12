#include<bits/stdc++.h>
typedef long long int ll;
#define eiif else if
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
ll n,k,x;
const int N=405;
ll a[N],dp[N][N],cache[N][N];
ll pre=0,po=0,op=0;
pair<ll,ll> s;
ll solve1(ll idx, ll taken)
{
    if(taken>x)
        return -1e15;
    if(idx>n)
    {
        if(taken==x)
            return 0;
        return -1e15;
    }
    ll &ans=cache[idx][taken];
    if(ans!=-1)
        return ans;
    ans=-1e15;
    for(ll j=idx;j<=idx+k-1;j++)
        ans=max(ans, a[j] + solve1(j+1, taken+(j<=n)));
    return ans;
}
int main()
{
   cin>>n>>k>>x;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    memset(cache,-1,sizeof(cache));
    ll ans=solve1(1,0);
    if(ans<0)
        ans=-1;
    cout<<ans<<endl;
    return 0;
}