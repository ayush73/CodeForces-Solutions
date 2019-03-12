#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
#define elif else if
#define INF 1e9+7;
int main()
{
    ll ix,iy;
    cin>>ix>>iy;
    ll q;
    cin>>q;
    double ans=INF;
    while(q--)
    {
        double x,y,v;
        cin>>x>>y>>v;
        double a=abs(x-ix);a=a*a;ll b=abs(iy-y);b=b*b;
        double d=sqrt(a+b);
        d=d/v;
        ans=min(ans,d);
    }
    cout<<fixed<<setprecision(10)<<ans<<endl;
    return 0;
}