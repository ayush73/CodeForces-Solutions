#include<bits/stdc++.h>
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
ll calc(ll n)
{
    vector<ll> w;
    ll k=sqrt(n);
    rep(i,1,k+1)
    {
        if(n%i==0){
            if((n/i)==i){
                w.push_back(i);
            }else{
                w.push_back(i);
                w.push_back(n/i);
            }
        }
    }
    ll size=w.size();
    /*cout<<"the value of the array is"<<endl;
    rep(i,0,size)
    {
        cout<<w[i]<<" ";
    }
    cout<<endl;
    if(w[0]==w[size-1])
        return size;
    */
    return size;
}
void solve()
{
   ll n;
    cin>>n;
    cout<<calc(n)<<'\n';
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