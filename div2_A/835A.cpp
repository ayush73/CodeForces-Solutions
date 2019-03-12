

#include<bits/stdc++.h>
using namespace std;
#define elif else if
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
int main()
{
    ll a,b,c,d,e;
    ll len,v1,v2,t1,t2;
    cin>>len>>v1>>v2>>t1>>t2;
    ll sum1=0,sum2=0;
    sum1+=(len*v1)+2*t1;
    sum2+=(len*v2)+2*t2;
    if(sum1==sum2)
        cout<<"Friendship"<<endl;
    elif(sum1>sum2)
        cout<<"Second"<<endl;
    elif(sum1<sum2)
        cout<<"First"<<endl;
    return 0;
}