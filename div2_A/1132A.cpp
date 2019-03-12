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
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll sum1=0,sum2=0;
    sum1+=(a*2);
    sum1+=(b);
    sum1+=(c);
    sum2+=(b);
    sum2+=(c);
    sum2+=(2*d);
    if(sum1==sum2)
    {
        if(c>0)
        {
            if(a==0 and d==0)
            {
                cout<<0<<endl;
            }
            else if(a>0 and d>0 and a==d)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
        }
        else
        {
            cout<<1<<endl;
        }
    }
    else
    {
        cout<<0<<endl;
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