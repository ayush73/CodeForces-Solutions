#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
#define pb push_back
#define mp make_pair
int main()
{
     ll n;
    cin>>n;
    vector<ll>v;
    rep(i,0,n)
    {
        ll z;
        cin>>z;
        v.pb(z);
    }
    sort(v.begin(),v.end());
    ll q=n-1;
    ll i=0;
    while(q--)
    {
        if(i%2==0)
        {
            v.pop_back();
        }
        else
        {
          //  v.erase(v[0]);
              v.erase (v.begin(),v.begin()+1);
        }
        i++;
    }
    cout<<v[0]<<endl;
    return 0;
}