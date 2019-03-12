#include<bits/stdc++.h>
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
void solve()
{
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll len=s.size();
    ll upper[26];
   // cout<<s<<endl;
    memset(upper,0,sizeof(upper));
    // it should contain all the same frequency letters...
    rep(i,0,len){
      //  cout<<"debug"<<endl;
        upper[s[i]-'A']++;
    }
    ll ans=INT_MAX;
    /*rep(i,0,k){
        cout<<upper[i]<<" "<<char(i+'a')<<endl;
    }*/
   // cout<<"hahahaa"<<endl;
    rep(i,0,k){
        ans=min(ans,upper[i]);
    }
    if(ans==0){
       // cout<<"debug1"<<endl;
        cout<<0<<endl;
    }else if(ans>0){
        cout<<k*ans<<endl;
    }else if(ans==INT_MAX){
       // cout<<"debug2"<<endl;
        cout<<0<<endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}