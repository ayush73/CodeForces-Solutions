#include<bits/stdc++.h>
using namespace std;
#define long long int;
int main(){
    int n;
    cin>>n;
    int i;
    vector <pair<int,int>> v;
    for(i=1;i<=n;i++)
    {
        int k;
        cin>>k;
        v.push_back(make_pair(k,i));
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    int g=1;
    int x=0;
    vector <pair<int,int>> yy;
   // cout<<endl;
    yy.push_back(make_pair(v[0].second,g));
  //  cout<<yy[0].first<<" "<<yy[0].second<<endl;
    for(i=1;i<n;i++)
    {
        if(v[i].first==v[i-1].first)
        {
            yy.push_back(make_pair(v[i].second,g));
            x++;
        }
        else
        {
            g++;
            g+=x;
            x=0;
            yy.push_back(make_pair(v[i].second,g));
        }
    }
    sort(yy.begin(),yy.end());
   // cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<yy[i].second<<" ";
    }
}