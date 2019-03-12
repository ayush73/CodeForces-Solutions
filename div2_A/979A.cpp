#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
#define elif else if
int main()
{
    ll n;
    cin>>n;
    ll x=n+1;
    if(x==1)
    {
        cout<<0<<endl;
    }
    else
    {
    if(x%2==0)
    {
        cout<<x/2<<endl;
    }
    else
    {
        cout<<x<<endl;
    }
    }
    return 0;
}