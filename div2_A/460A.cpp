#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
int main()
{
    ll m,n,z;
    cin>>m>>n;
    ll k=m/n;
    z=m+k;
    ll v=0;
    ll i;
  //  cout<<"value of z is"<<" "<<z<<endl;
   // ll t=3;
    while(1)
    {
        for(i=m+1;i<=z;i++)
        {
            if(i%n==0)
            {
                // counting extra days
               // cout<<"value of i is"<<" "<<i<<endl;
                v++;
            }
        }
      //  cout<<"value of v is"<<" "<<v<<endl;
        m=z;
        z=z+v;
        v=0;
     //   cout<<"value of m,z and v are"<<" "<<m<<" "<<z<<" "<<v<<endl;
       // v=0;
      //  cout<<"value of m and z and v is"<<" "<<m<<" "<<z<<" "<<v<<endl;
        if(v==0 && i==z+1) break;
    }
    cout<<z<<endl;
    return 0;
}