#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,a[n];
    int ans=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        ans=max(ans,a[i]);
    }
    // now the value of k must be larger than this....
    // do binary search.....
    // by the way u need the smallest value.....
    // so in our case.......
    int pre=ans;
    while(1)
    {
        int res=0;
        for(int i=0;i<n;i++)
        {
            res+=(pre-a[i]);
        }
        if(res>sum)
            break;
        else
            pre++;
    }
    cout<<pre<<endl;
    return 0;
}