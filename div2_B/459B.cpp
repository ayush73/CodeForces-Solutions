#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n;
    cin>>n;
    ll i,a[n],b[n];
    ll ans=-1;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>ans)
        {
            ans=a[i];
        }
        b[i]=a[i];
    }
    sort(b,b+n);
    ll p=b[n-1];
    ll q=b[0];
    ll cd;
    ll j=b[n-1]-b[0];
    ll hp=0,lenovo=0;
    for(i=0;i<n;i++)
    {
        if(p!=q)
        {
        if(b[i]==p)
        {
          hp++;  
        }
        if(b[i]==q)
        {
            lenovo++;
        }
        }
    }
   // ll cd;
    if(p==q)
    {
        cd=n*(n-1);
        cd=cd/2;
    }
    else
    {
        cd=hp*lenovo;
    }
    cout<<j<<" "<<cd<<endl;
    return 0;
}