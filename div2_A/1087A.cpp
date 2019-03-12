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
   ll len=s.size();
   ll pre=len/2;
   if(len%2==0){
   pre--;
   }
   ll count=1;
   cout<<s[pre];
   ll k=pre+1;
   ll j=pre-1;
   if(count<len)
   {
   while(1)
   {
       if(k<=len-1)
       {
       cout<<s[k];
       k++;
       count+=1;
       if(count==len)
       {
           break;
       }
       }
       if(j>=0)
       {
       cout<<s[j];
       count+=1;
       if(count==len)
       {
           break;
       }
       j--;
       }
       //count+=2;
   }
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