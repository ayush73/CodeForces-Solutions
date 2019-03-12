#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
#define elif else if
int main()
{
    ll n;
    cin>>n;
    if(n%2==0)
    {
    ll k=n/2;
    if(k%2==0)
    {
        ll z=(k-2)/2;
        if(z<0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<z<<endl;
        }
    }
    elif(k%2!=0)
    {
        ll z=(k-1)/2;
        if(z<0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<z<<endl;
        }
    }
    }
    else
    {
        cout<<"0"<<endl;
    }
    return 0;
}
