#include<bits/stdc++.h>
#define elif else if
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define cerr A
#define mod 1e9+7
typedef long long int ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll query;
    cin>>query;
    while(query--)
    {
        ll k,n;
        cin>>k>>n;
        ll pre=n+(k-1)*9;
        cout<<pre<<endl;
    }
    return 0;
}

