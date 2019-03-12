#include<bits/stdc++.h>
#define rep(i,a,b) for(ll i=a;i<b;i++)
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
#define F first
#define S second
using namespace std;
int main()
{
   // you have to release the difference also
    ll n,sum;
    cin>>n>>sum;
    ll virtual_sum=0;
    ll sum_si=0;
    vector<pair<ll,ll>> v;
    vector<ll> def_pre;
    rep(i,0,n)
    {
        ll x,y;
        cin>>x>>y;
        v.pb(mp(x,y));
        def_pre.pb(x-y);
        virtual_sum+=x;
        sum_si+=y;
    }
    ll def=virtual_sum-sum;
    if(def<=0)
    {
        cout<<0<<endl;
    }
    elif(sum_si>sum)
    {
        cout<<-1<<endl;
    }
    else
    {
        sort(def_pre.begin(),def_pre.end());
        reverse(def_pre.begin(),def_pre.end());
        ll size=def_pre.size();
        ll p=virtual_sum;
        ll c=0;
        rep(i,0,size)
        {
            p=p-def_pre[i];
            if(p<=sum)
            {
                c++;
                break;
            }
            c++;
        }
    //    cout<<"hahaha"<<" "<<p<<endl;
        cout<<c<<endl;
    }
    return 0;
}