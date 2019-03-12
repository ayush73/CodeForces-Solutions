#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define elif else if
#define pb push_back
#define mp make_pair
#define F first
#define S second
ll n;
int main()
{
    cin>>n;
    bool ok=false;
    rep(i,0,n)
    {
        ll x;
        cin>>x;
        if(x%2!=0)
        {
            ok=true;
            break;
        }
    }
    if(ok)
    {
        cout<<"First"<<endl;
    }
    else
    {
        cout<<"Second"<<endl;
    }
    return 0;
}