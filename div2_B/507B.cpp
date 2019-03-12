#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll distance(ll x1, ll y1, ll x2, ll y2,ll r) 
{ 
    // Calculating distance 
    float distance=(sqrt(pow(x1 - x2, 2) +  
                pow(y1 - y2, 2) * 1.0));
  //  cout<<distance<<endl;
    distance=distance/(2*r);
   // cout<<"hahaa"<<" "<<distance<<endl;
    return ceil(distance);
} 
int main()
{
    ll r,x1,x2,y1,y2;
    cin>>r>>x1>>y1>>x2>>y2;
    cout<<ceil(hypot((x1-x2),(y1-y2))/(2*r));
    return 0;
}