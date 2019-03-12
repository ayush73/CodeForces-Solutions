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
    vector<pair<ll,ll>> v;
    rep(i,0,n)
    {
        ll x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    ll size=v.size();
    ll index;
    cin>>index;
    ll pre;
    rep(i,0,size)
    {
        rep(j,v[i].first,v[i].second+1)
        {
           if(j==index)
           {
               pre=i+1;
               break;
           }
        }
    }
    ll def=n-pre;
    def+=1;
    cout<<def<<endl;
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