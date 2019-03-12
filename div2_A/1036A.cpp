#include<bits/stdc++.h>
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
void solve()
{
    unsigned long long int a,b;
    cin>>a>>b;
    ll res=b/a;
    ll x=b%a;
    if(x>0)
    res+=1;
    if(res<=1){
        cout<<1<<endl;
    }else{
        cout<<res<<endl;
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