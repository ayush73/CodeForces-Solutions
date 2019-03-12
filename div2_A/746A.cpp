#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
#define elif else if
#define mp make_pair
int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll x=a;
    ll ans=0,i=1;
    while(i<=a)
    {
       ll j=i*2;
       ll sigma=i*4;
       if(j>b || sigma>c)
       {
           break;
       }
       ll sum=j+sigma+i;
       ans=max(ans,sum);
       i++;
    }
    cout<<ans<<endl;
    return 0;   
}