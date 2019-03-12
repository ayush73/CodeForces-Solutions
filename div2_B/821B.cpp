#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define mod 1e9+7
int main()
{
    ll m,b,s=0,x;
    cin>>m>>b;
    rep(i,0,b+1){
        x=(b-i)*m;
        s=max(s,((i+1)*(x+1)*(i+x))/2);
    }cout<<s;
}