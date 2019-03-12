#include<bits/stdc++.h>
#define elif else if 
#define pb push_back
#define mp make_pair
#define f first
#define s second
typedef long long int ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
void pre(){

}
void solve(){
  ll query;
    cin>>query;
    ll sum=0;
    while(query--)
    {
      ll a,b;
        cin>>a>>b;
        ll def=b-a;
        if(def>=2)
            sum++;
    }
    cout<<sum<<endl;
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

