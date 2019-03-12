#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
#define elif else if
using namespace std;
int main()
{
    vector<pair<string,ll>> mymap;
    ll q;
    mymap.push_back(make_pair("Tetrahedron",4));
    mymap.push_back(make_pair("Cube",6));
    mymap.push_back(make_pair("Octahedron",8));
    mymap.push_back(make_pair("Dodecahedron",12));
    mymap.push_back(make_pair("Icosahedron",20));
    ll t,sum=0;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s=="Tetrahedron")q=0;
        elif(s=="Cube")q=1;
        elif(s=="Octahedron")q=2;
        elif(s=="Dodecahedron")q=3;
        elif(s=="Icosahedron")q=4;
        sum+=mymap[q].second;
    }
    cout<<sum<<endl;
    return 0;
}

