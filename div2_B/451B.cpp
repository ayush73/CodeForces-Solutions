

#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll i,a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        cout<<"yes"<<endl;
        cout<<"1"<<" "<<"1"<<endl;
    }
    else if(n>1)
    {
      //  cout<<"debugprime"<<endl;
        // sort(a,a+n);
        ll c=0;
        ll p=0,j=0;
        for(i=0;i<n;i++)
        {
            b[i]=a[i];
        }
        for(i=1;i<n;i++)
        {
            if(a[i]-a[i-1]<0)
            {
                c++;
                if(c==1)
                {
                    p=i;
                //    cout<<"value of p is:"<<" "<<p<<endl;
                }
                else
                {
                   j=i;     
                }
            }
        }
        if(j==0&&p>0)
        {
       //     cout<<"debuggamma"<<endl;
        //    cout<<"value of p is:"<<" "<<p<<endl;
            swap(b[p],b[p-1]);
            sort(a,a+n);
        //    cout<<"yes"<<endl;
            for(i=0;i<n;i++) {if(a[i]==b[i]){continue;} else {break;}}
            if(i==n)
            {
                cout<<"yes"<<endl;
            cout<<p<<" "<<p+1<<endl;
            }
            else
            cout<<"no"<<endl;
        }
        else if(p==0)
        {
       //     cout<<"debugskdf"<<endl;
            cout<<"yes"<<endl;
            cout<<"1"<<" "<<"1"<<endl;
        }
        if(p>0&&j>0)
        {
         //   cout<<"debug"<<endl;
         //   cout<<"value of p and j is:"<<" "<<p<<" "<<j<<endl;
            p--;
            j++;
         //   cout<<"value of p and j is:"<<" "<<p<<" "<<j<<endl;
            reverse(b+p,b+j);
            //    sort(a,a+n);
         //   cout<<"array B becomes after that:"<<endl;
          /*  cout<<"value of array B is:"<<endl;
            for(i=0;i<n;i++)
            {
                cout<<b[i]<<" ";
            }
            cout<<endl;  */
            sort(a,a+n);
            for(i=0;i<n;i++)
            {
               if(a[i]==b[i]) {continue;} else {break;}
            }
         //   cout<<"value of array A is:"<<endl;
          //  sort(a,a+n);
         /*   for(i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;*/
          //  cout<<"value of i is:"<<" "<<i<<endl;  
            if(i==n)
            {
                cout<<"yes"<<endl;
                cout<<p+1<<" "<<j<<endl;
            }
            else
            {
                cout<<"no"<<endl;
            }
          //  cout<<endl;
        }
    }
    return 0;
}