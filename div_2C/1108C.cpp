#include<bits/stdc++.h>
#define elif else if
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define cerr A
#define mod 1e9+7
typedef long long int ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;
int main()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll len=s.size();
    vector<char> pre;
    vector<char> pre2;
    pre.push_back('B');
    pre.push_back('G');
    pre.push_back('R');
    pre2.push_back('B');
    pre2.push_back('G');
    pre2.push_back('R');
    string prev;
    ll game=0;
    ll pre1=0;
    int index=0;
    int papa=0;
    ll ans=INT_MAX;
    string ans_prime;
    do{
        papa++;
        ll counter=0;
        ll gamma=n;
        ll sum=0;
        rep(i,0,gamma)
        {
            if(s[i]!=pre[counter])
            {
                sum++;
            }
            counter++;
            if(counter==3)
            {
                counter=0;
            }
        }
        if(sum<ans)
        {
            ans=sum;
            index=papa;
        }
    }while(next_permutation(pre.begin(),pre.end()));
    cout<<ans<<endl;
    int k=0;
    do{
        k++;
        if(k==index)
        {
            ll counter1=0;
            rep(i,0,n)
            {
                cout<<pre2[counter1];
                counter1++;
                if(counter1==3)
                {
                    counter1=0;
                }
            }
        }
    }while(next_permutation(pre2.begin(),pre2.end()));
    return 0;
}