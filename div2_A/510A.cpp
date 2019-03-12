

#include<bits/stdc++.h>
#define elif else if 
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define all(x) (x).begin(),(x).end()
typedef long long int ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
void solve()
{
    ll n,m;
    cin>>n>>m;
    char s[n][m];
    memset(s,0,sizeof(s));
    rep(i,0,n)
    {
        if(i%2)
        {
            if(i%4==1)
            {
                rep(j,0,m-1)
                {
                    s[i][j]='.';
                }
                s[i][m-1]='#';
            }
            else if(i%4==3)
            {
                s[i][0]='#';
                rep(j,1,m)
                {
                    s[i][j]='.';
                }
            }
        }
        else
        {
            rep(j,0,m)
            {
                s[i][j]='#';
            }
        }
    }
    rep(i,0,n)
    {
        rep(j,0,m)
        {
            cout<<s[i][j];
        }
        cout<<endl;
    }
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