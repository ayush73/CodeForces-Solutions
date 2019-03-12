#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
const ll n=14;
int main()
{
    ll a[n],b[n];
    ll i,j;
    rep(i,0,n)
    {
        cin>>a[i];
    }
    ll sum=0;
    for(i=0;i<n;i++)
    {
        ll c=0;
        if(a[i]>0)
        {
          //  cout<<"debug"<<endl;
          //  cout<<"value of a[i] is"<<" "<<a[i]<<endl;
        for(j=0;j<n;j++)
        {
            b[j]=a[j];
        }
        b[i]=0;
        ll x=a[i]%14;
         //   cout<<"value of x is"<<" "<<x<<endl;
         //   cout<<"value of i+1 is"<<" "<<i+1<<endl;
          //  cout<<"value of n-1 is"<<" "<<n-1<<endl;
        ll v=i+1;
          //  cout<<"value of v is"<<" "<<v<<endl;
        while(x--)
        {
           // cout<<"debug_prime"<<endl;
         //   cout<<"hahaha"<<endl;
          //  cout<<"value of v is"<<" "<<v<<endl;
            if(v==n) 
            {
              // cout<<"debug"<<endl;
               v=0;   
            }
            b[v]+=1;
         //   cout<<"value of b[v] and v is"<<" "<<b[v]<<" "<<v<<endl;
            v++;
        }
        ll y=a[i]/14;
        for(j=0;j<14;j++)
        {
            b[j]+=y;
        }
        for(j=0;j<14;j++)
        {
            if(b[j]%2==0)
            {
               c+=b[j];  
            }
        }
        sum=max(sum,c);
        }
    }
    cout<<sum<<endl;
    return 0;
    
}