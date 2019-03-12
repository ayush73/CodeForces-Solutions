#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
#define INF 1e9+7;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll i;
    vector<ll> v;
    rep(i,0,n)
    {
        ll z;
        cin>>z;
        v.pb(z);
    }
    sort(v.begin(),v.end());
    ll sigma=v.size();
   /* cout<<"printed array is"<<endl;
    rep(i,0,sigma)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"sorted array is"<<endl;
    rep(i,0,k)
    {
        cout<<v[i]<<" ";
    }
    
    cout<<endl;  */
    if(k>0)
    {
    ll p=v[k-1];
    if(v[k-1]==v[k])
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<p<<endl;
    }
    }
    else
    {
        ll ans=INF;
        rep(i,0,sigma)
        {
            ans=min(ans,v[i]);
        }
        ans--;
        if(ans<1)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
   // cout<<endl;
    // u should print an integer x such that exactly k elements are less than or equal to it
   // ll p=v[k-1];
   // cout<<p<<endl;
    return 0;
}