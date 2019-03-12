#include<bits/stdc++.h>
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    if(n<=2)
    {
        cout<<"No"<<endl;
    }
    else if(n>2)
    {
        cout<<"Yes"<<endl;
       cout<<n-1<<" ";
        rep(i,1,n){
            cout<<i<<" ";
        }
        cout<<endl;
        cout<<1<<" "<<n<<endl;
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