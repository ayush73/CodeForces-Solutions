#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define elif else if
#define mp make_pair
#define rep(i,a,b) for(ll i=a;i<b;i++)
int main()
{
    ll n,k,m;
    cin>>n>>k>>m;
    // the difference is divisible by both if both the numbers leave the same remainder
    vector<ll> get_vector[1234567];
    rep(i,0,n)
    {
        ll res;
        cin>>res;
        ll y=res%m;
        get_vector[y].pb(res);
    }
   // ll size=get_vector.size();
    ll i;
    //rep(i,0,m)
    bool ok=false;
    for( i=0;i<m;i++)
    {
        ll q=get_vector[i].size();
        //cout<<"hahahahaha"<<" "<<q<<endl;
        if(q>=k)
        {
            ok=true;
            cout<<"Yes"<<endl;
        rep(j,0,k)
        {
            cout<<get_vector[i][j]<<" ";
        }
            cout<<endl;
            break;
        }
      //  cout<<"value of i is"<<" "<<i<<endl;
    }
    if(i==m &&!ok)
    {
        cout<<"No"<<endl;
    }
    return 0;
}