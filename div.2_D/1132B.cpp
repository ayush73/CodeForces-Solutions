#include<bits/stdc++.h>
#define elif else if 
#define pb push_back
#define mp make_pair
#define f first
#define s second
typedef long long int ll;
const ll mod=1e9+7;
#define vi vector<ll>
#define pi pair<ll,ll>
#define trace(x) cerr << #x << ": " << x << endl;
#define all(x) (x).begin(),(x).end()
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

void show(vector <ll> w)
{
    ll pre=w.size();
    cout<<"value of the required array is"<<endl;
    rep(i,0,pre)
    {
        cout<<w[i]<<" ";
    }
    cout<<endl;
}

void solve()
{
    ll n;
    cin>>n;
    vi v;
    ll sum=0;
    rep(i,0,n)
    {
        ll x;
        cin>>x;
        sum+=x;
        v.pb(x);
    }
    ll size=v.size();
    sort(all(v));
    reverse(all(v));
    ll query;
    cin>>query;
    while(query--)
    {
        ll pre;
        cin>>pre;
        pre--;
        cout<<(sum-v[pre])<<endl;
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