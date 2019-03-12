#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define elif else if
#define pb push_back
int main()
{
    ll d1,d2,d3;
    cin>>d1>>d2>>d3;
    vector<ll> v;
    v.pb(d1+d2+d3);
    v.pb(2*d1+2*d2);
    v.pb(2*d1+2*d3);
    v.pb(2*d2+2*d3);
    sort(v.begin(),v.end());
    cout<<v[0]<<endl;
    return 0;
}