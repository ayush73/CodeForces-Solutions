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
    ll n,k;
    cin>>n>>k;
    ll pre=n*3;
    ll def=k-1;
    ll sum1=0;
    sum1+=def+pre;
    ll sum2=0;
    ll def1=(n-k);
    sum2+=pre+(def1);
    ll ans=0;
    if(sum1>0)
    {
        ans=sum1;
    }
    if(sum2>0 and sum2<ans)
    {
        ans=sum2;
    }
    cout<<ans<<endl;
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