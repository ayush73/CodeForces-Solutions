#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define elif else if
#define pb push_back
#define mp make_pair
typedef long long int ll;
int main()
{
    ll n,k,z;
    cin>>n>>k;
    ll final_ans=0;
    vector<ll> a;vector<ll> b;
    vector<pair<ll,ll>> def;
    //vector<pair<ll,ll>> check;
   // rep(i,0,n){check[i].second=0;}
  //  exit(0);
    rep(i,0,n)
    {
        cin>>z;a.pb(z);
    }
    rep(i,0,n)
    {
        cin>>z;b.pb(z);
    }
    rep(i,0,n)
    {
        z=b[i]-a[i]; def.pb(mp(z,i));
    }
   /* cout<<"contents of the def array are"<<endl;
    cout<<"A and B array are"<<endl;
    rep(i,0,a.size())
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    rep(i,0,b.size())
    {
        cout<<b[i]<<" ";
    }
    cout<<endl; */
    sort(def.begin(),def.end());
    reverse(def.begin(),def.end());
    bool check[n];memset(check,0,sizeof(check));
    rep(i,0,k)
    {
        check[def[i].second]=true;
    }
    rep(i,0,n)
    {
        if(check[i])
        {
            final_ans+=a[i];
        }
        else
        {
            final_ans+=min(a[i],b[i]);
        }
    }
    cout<<final_ans<<endl;
    return 0;
}