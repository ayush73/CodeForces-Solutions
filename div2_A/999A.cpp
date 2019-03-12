#include<bits/stdc++.h>
using namespace std;
#define elif else if
#define pb push_back
#define mp make_pair
typedef long long int ll; 
#define rep(i,a,b) for(ll i=a;i<b;i++)
int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll> v;
    rep(i,0,n)
    {
        ll x;
        cin>>x;
        v.pb(x);
    }
    bool ok=0,ok1=0;
    ll sum=0;
    while(1)
    {
        ll def=v[0];
     //   cout<<"value of def is"<<" "<<def<<endl;
        if(def<=k)
        {
           // cout<<"debugx"<<endl;
            sum++;
            v.erase(v.begin(),v.begin()+1);
            if(v.size()==0)
            {
                break;
            }
            //continue;
        }
        ll si=v[v.size()-1];
        if(si<=k)
        {
            //cout<<"debugy"<<endl;
            sum++;
            v.pop_back();
            if(v.size()==0)
            {
                break;
            }
        }
        if(si>k && def>k)
        {
            break;
        }
    }
    cout<<sum<<endl;
    return 0;
}