// A Dynamic Programming based C++ program to find minimum of coins
// to make a given change V
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n;
    cin>>n;
    ll sum=0;
    ll q=n;
    if(q>=100)
    {
        ll res=q/100;
        sum+=res;
        ll res1=q%100;
        q=res1;
    }
    //cout<<q<<endl;
    if(q>=20)
    {
        ll res=q/20;
        sum+=res;
        ll res1=q%20;
     //   cout<<"now thw value o q is"<<" "<<res1<<endl;
        q=res1;
    }
   // cout<<q<<endl;
    if(q>=10)
    {
     //   cout<<"debug"<<endl;
        ll res=q/10;
        sum+=res;
        ll res1=q%10;
        q=res1;
    }
   // cout<<q<<endl;
    if(q>=5)
    {
         ll res=q/5;
        sum+=res;
        ll res1=q%5;
         q=res1;
    }
  //  cout<<q<<endl;
    if(q>=1)
    {
         ll res=q/1;
        sum+=res;
        ll res1=q%1;
        q=res1;
    }
  //  cout<<q<<endl;
    cout<<sum<<endl;
}