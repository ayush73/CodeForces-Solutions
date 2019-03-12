#include<bits/stdc++.h>
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
      ll res;
        cin>>res;
        // equation is a*x + b*y =c;
        ll pre=res/7;
        bool ok=0;
        for(int i=0;i<=pre;i++)
        {
            ll def=res-i*7;
            if(def%3==0)
            {
                ok=1;
            }
        }
        if(ok)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}