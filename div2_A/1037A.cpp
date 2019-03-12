#include<bits/stdc++.h>
#define elif else if
#define pb push_back
#define mp make_pair
#define F first
#define S second
typedef long long int ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    ll k=1;
    // any number can be formed with one 1 and various powers of 2...
    ll c=1;
    ll z=0;
    while(1)
    {
        c=c*2;
        if(c>n){
            break;
        }else{
            z++;
        }
    }
    cout<<z+1<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}