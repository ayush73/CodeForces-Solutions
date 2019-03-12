#include<bits/stdc++.h>
#define elif else if 
#define pb push_back
#define mp make_pair
#define F first
#define S second
using namespace std;
typedef long long int ll;
const ll mod=1e9+7;
#define rep(i,a,b) for(ll i=a;i<b;i++)
//ll dp[200000];
void solve()
{
  string s;
  cin>>s;
  ll count=1;
  ll len=s.size();
 // ll pre=len-1;
  bool ok=0;
  vector<char> s1;
  ll pre=len-1;
  rep(i,0,len-1){
      if(s[i]==s[i+1]){
          count++;
      }
      s1.push_back(s[i]);
  }
  s1.push_back(s[len-1]);
  if(count==len)
  {
      cout<<-1<<endl;
  }
  else
  {
      sort(s1.begin(),s1.end());
      ll size=s1.size();
      rep(i,0,size)
      {
          cout<<s1[i];
      }
      cout<<endl;
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