#include<bits/stdc++.h>
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define vi vector<ll>
#define all(x) (x).begin(),(x).end()
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
//vi w;

ll calculate_terms(ll difference,ll n)
{
    ll initial_val=1;
    ll def=n-initial_val;
    def/=difference;
    def+=1;
    return def;
}
void printDivisors(int n) 
{ 
    vi w;
    // Note that this loop runs till square root 
    for (ll i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            // If divisors are equal, print only one 
            if (n/i == i){
                w.push_back(i);
            } 
               // printf("%d ", i); 
  
            else {
                w.push_back(i);
                w.push_back(n/i);
            } 
               // printf("%d %d ", i, n/i); 
        } 
    }
    ll size=w.size();
    sort(all(w));
    ll sum=0;
    vi f;
    //ll size=w.size();
    rep(i,0,size){
         ll terms=calculate_terms(w[i],n);
       //  cout<<"val of number of terms is"<<" "<<terms<<endl;
         ll intial_sum=0;
         ll res_pre=terms;
         ll faf=2*1+((terms-1)*w[i]);
         res_pre*=faf;
         res_pre/=2;
         f.push_back(res_pre);
        //cout<<w[i]<<" ";
    }
    sort(all(f));ll size1=f.size();
    rep(i,0,size1)
    {
        cout<<f[i]<<" ";
    }
    cout<<endl;
} 
void solve()
{
    ll n;cin>>n;
    printDivisors(n);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}