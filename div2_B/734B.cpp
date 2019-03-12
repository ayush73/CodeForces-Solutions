#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
#define elif else if
#define pb push_back
#define F first
#define S second
#define pb push_back
#define mp make_pair
int main()
{
    ll k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;
    // for 256
    ll z=min(k5,k6);
    ll k=min(k2,z);
    ll sigma=256*k;
    k2=k2-k;
    ll p=0;
    if(k2>0)
    {
        ll q=min(k2,k3);
         p+=32*q;
    }
      ll sum=0;
        sum+=sigma+p;
        cout<<sum<<endl;
    return 0;
}