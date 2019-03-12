

#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
#define F first
#define S second
int main()
{
    ll n,k;
    cin>>n>>k;
    ll i,a[n];
    ll sum=0;
    rep(i,0,n)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(abs(sum)%k==0)
    {
        cout<<abs(sum)/k<<endl;
    }
    else
    {
        cout<<(abs(sum)/k)+1<<endl;
    }
    
}