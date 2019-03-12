

#include<bits/stdc++.h>
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<ll> v;
    rep(i,0,n){
        ll x;
        cin>>x;
        v.pb(x);
    }
    ll size=v.size();
    ll first=0,second=0;
    ll c=0;
    while(1)
    {
        if(v.size()==0)
        {
            break;
        }
        else
        {
             if(c%2==0)
             {
                ll res=v.size();
                 ll val=v[res-1];
                 ll in=v[0];
                 if(val>=in)
                 {
                    first+=val;
                     v.pop_back();
                 }
                 else
                 {
                     first+=in;
                     v.erase(v.begin(),v.begin()+1);
                 }
             }
            else
            {
                ll res=v.size();
                ll val=v[res-1];
                ll in=v[0];
                if(val>=in)
                {
                   second+=val;
                    v.pop_back();
                }
                else
                {
                    second+=in;
                    v.erase(v.begin(),v.begin()+1);
                }
            }
        }
        c++;
    }
  // cout<<"debujissies"<<endl;
   // cout<<"hahahahaha"<<endl;
    cout<<first<<" "<<second<<endl;
    return 0;
}