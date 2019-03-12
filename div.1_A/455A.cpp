

#include<bits/stdc++.h>
using namespace std;
map <long long int,long long int> m;
vector <pair<long long int,long long int>> v;
const long long int maxn = 111111;
long long int f[maxn];
int main()
{
   long long int n;
   cin>>n;
   while(n--)
   {
       long long int x;
       cin>>x;
       m[x]++;
   }
    for(map<long long int,long long int> :: iterator it=m.begin();it!=m.end();it++)
    {
        v.push_back(make_pair(it->first,it->second));
    }
    long long int i;
    for(i=0;i<v.size();i++)
    {
       long long int pr=i-1;
        while(pr>=0&& v[pr].first+1==v[i].first) pr--;
        if (pr == -1) f[i] = 1LL * v[i].first * v[i].second;
         else f[i] = f[pr] + 1LL * v[i].first * v[i].second;
        if (i != 0)
            f[i] = max(f[i], f[i - 1]);
    }
    cout<<f[v.size()-1]<<endl;
    return 0;
}