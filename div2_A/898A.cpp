

#include<bits/stdc++.h>
typedef long long int ll;
#define elif else if
using namespace  std;
int main()
{
    string s;
    cin>>s;
    ll len=s.size();
    ll i;
    ll k=stoi(s);
    ll ans=0;
  //  k=k/10;
    ll x=k%10;
    // putting x into a definite position
    ll y=10-x;
    ll alpha=k-x;
    ll beta=k+y;
    ll def=abs(alpha-k);
    ll def1=abs(beta-k);
    if(def==def1)
    {
        cout<<k-5<<endl;
    }
    elif(def1>def)
    {
      cout<<alpha<<endl;   
    }
    else
    {
        cout<<beta<<endl;
    }
    return 0;
 //   cout<<k<<endl;
}