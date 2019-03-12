#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll k;
    cin>>k;
    ll i,a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll sum=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>8)
        {
           // int x=a[i]-8;
            if(i<n-1)
            {
                ll x=a[i]-8;
                a[i+1]+=x;
                // sum+=8;
            }
              sum+=8;
            if(sum>=k)
            {
                cout<<i+1<<endl;
                break;
            }
        }
        else if(a[i]<=8)
        {
            sum+=a[i];
            if(sum>=k)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
 //  cout<<"value of i is:"<<" "<<i<<endl;
  //  cout<<"value of sum is:"<<" "<<sum<<endl;
    if(i==n&&sum<k)
    {
        cout<<"-1"<<endl;
    }
}