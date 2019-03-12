#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    long long int k;
    cin>>n>>k;
    long long int i;
    long long int a[n],b[n];
    long long int dpstate[n];
    long long int dpmaxstate[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        dpstate[i]=a[i];
    }
    long long int sum=0;
    long long int xx=a[0]+a[1];
    long long int zz=k-xx;
    if(zz>=0)
    {
    a[1]+=zz;
    sum+=zz;
    }
    for(i=2;i<n;i++)
    {
        long long int hh=a[i]+a[i-1];
        long long int xxx=(k-hh);
        if(xxx>=0)
        {
        a[i]+=xxx;
        sum+=xxx;
        }
    }
    cout<<sum<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}