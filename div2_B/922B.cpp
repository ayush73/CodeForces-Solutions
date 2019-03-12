#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
int main()
{
   ll n;
   cin>>n;
   ll ans=0;
   rep(i,1,n+1){
       rep(j,i,n+1)
       {
           ll c=i^j;
           if(c<=n){
               if(c>=j && i+j>c)
               {
                   ans++;
               }
           }
       }
   }
   cout<<ans<<endl;
   return 0;
}