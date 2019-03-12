#include<bits/stdc++.h>
#define elif else if
#define pb push_back
#define mp make_pair
#define f first
#define s second
typedef long long int ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
unsigned countBits(unsigned int number) 
{       
      return (int)log2(number)+1; 
} 
void solve()
{
    ll n;
    cin>>n;
    ll sum=n*(n+1);
    sum/=2;
    ll sum1=0;
    ll pre=countBits(n);
    rep(i,0,pre)
    {
        sum1+=pow(2,i);
       // cout<<"value of sum1 is"<<" "<<sum1<<endl;
    }
    cout<<sum-2*sum1<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}