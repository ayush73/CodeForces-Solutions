#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,a,b) for(int i=a;i<b;i++)
int main()
{
   ll n,p,i,k;
   cin>>n;
    cin>>k;
   vector <ll> v;
    for(i=0;i<n;i++)
    {
        cin>>p;
        if(p<0)
        {
        v.push_back(p);
        }
    }
    if(v.size()==0)
    {
        cout<<"0"<<endl;
    }
    else
    {
        ll sum=0,c=0;
        sort(v.begin(),v.end());
      //  cout<<"debug"<<endl;
       // exit(0);
        for(i=0;i<v.size();i++)
        {
            c++;
            if(c>k)
            {
              //  cout<<"value of c and k are"<<" "<<c<<" "<<k<<endl;
                break;
            }
            else
            {
               // cout<<"value of v[i] is:"<<" "<<v[i]<<endl;
                sum+=v[i];
            }
        }
        cout<<abs(sum)<<endl;
    }
    return 0;
}