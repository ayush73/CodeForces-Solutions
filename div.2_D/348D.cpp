#include<bits/stdc++.h>
#define elif else if 
#define pb push_back
#define mp make_pair
#define f first
#define s second
typedef long long int ll;
const ll mod=1e9+7;
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
const int N = 3005;
int ans[N][N];
string s[N];
void solve1()
{
    ll n, m;
    cin >> n >> m;
    rep(i, 1, n+1){
        cin >> s[i];
        s[i] = '0' + s[i];
    }
    ans[1][2] = 1;
    ll p1, p2, p3, p4;
    rep(i, 1, n+1){
        rep(j, 1, m+1){
            if(s[i][j] == '#') ans[i][j] = 0;
            ans[i][j] %= mod;
            ans[i + 1][j] += ans[i][j];
            ans[i][j + 1] += ans[i][j];
        }
    }
    p1 = ans[n - 1][m], p3 = ans[n][m - 1];
    rep(i, 1, n+1){
        rep(j, 1, m+1)
            ans[i][j] = 0;
    }
    ans[2][1] = 1;
    rep(i, 1, n+1){
        rep(j, 1, m+1){
            if(s[i][j] == '#') ans[i][j] = 0;
            ans[i][j] %= mod;
            ans[i + 1][j] += ans[i][j];
            ans[i][j + 1] += ans[i][j];
        }
    }
    p2 = ans[n][m - 1], p4 = ans[n - 1][m];
    cout << ((p1 * p2) % mod - (p3 * p4) % mod + mod) % mod;
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
      solve1();
  }
  return 0;
}