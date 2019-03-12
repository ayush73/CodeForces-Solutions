#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
int main()
{
    ll n;cin>>n;
    ll k=n/5;
    ll x=n%5;
    if(x==0)
        cout<<k<<endl;
    else
        cout<<(k+1)<<endl;
}