#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
int main()
{
    ll n,k;
    cin>>n>>k;
    ll p=k;
    while(p--)
    {
        ll x=n%10;
        if(x==0)
        {
            n=n/10;
        }
        else
        {
            n--;
        }
    }
    cout<<n<<endl;
    return 0;
}