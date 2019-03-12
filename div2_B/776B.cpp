using namespace std;
typedef long long int ll;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define elif else if
#define pb push_back
#define mp make_pair
#define F first
#define S second
ll n;
ll sieve[100005];
void buildSieve()
{
   // cout<<"hahahaha"<<endl;
    for(ll i=2; i<=n+1; i++)
	{
		if(!sieve[i])
        {
			for(ll j=2*i; j<=n+1; j+=i)
            {
				sieve[j]=1;
            }
        }
	}
}
int main()
{
    cin>>n;
    buildSieve();
    if(n>2)
    {
    cout<<2<<endl;    
    }
    else
    {
        cout<<1<<endl;
    }
    for(ll i=2;i<=n+1;i++)
    {
      if(!sieve[i])
      {
          cout<<1<<" ";
      }
      else
      {
          cout<<2<<" ";
      }
    }
    return 0;
}