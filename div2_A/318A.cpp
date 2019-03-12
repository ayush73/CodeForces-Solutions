#include<bits/stdc++.h>
#define elif else if
#define pb push_back
#define mp make_pair
#define F first
#define S second
typedef long long int ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
void solve()
{
   ll n,k;
   cin>>n>>k;
   ll res=n/2;
     ll pre;pre=n/2;
     if(n%2!=0)
         pre+=1;
     ll num;
     if(k<=pre)
     {
       num=1+(k-1)*2;
       cout<<num<<endl;
     }
     else
     {
        ll def=k-pre;
        num=2+(def-1)*2;
        cout<<num<<endl;
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