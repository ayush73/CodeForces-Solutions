#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef long long int ll;
#define elif else if
#define pb push_back
#define mp make_pair
using namespace std;
// Function to print the sorted array of string
bool solve(string substr,string str)
{
    ll size=str.size();
    ll size_1=substr.size();
    // program copied here
     ll i,j,temp;
    //char str[100]={"This is a pattern matching"};
   // char substr[20]={"pattern"};
 
    for(i=0;str[i]!='\0';i++)
    {
        j=0;
        if(str[i]==substr[j])
        {
            temp=i+1;
            while(str[i]==substr[j])
            {
                i++;
                j++;
            }
 
            if(substr[j]=='\0')
            {
               // cout<<"debug_alpha"<<endl;
                return 1;
                exit(0);
            }
            else
            {
                i=temp;
                temp=0;
            }
        }
        else
        {
            i++;
        }
    }
 
    if(temp==0)
    {
        return 0;
    }
    return 1;
    // program copied here
}
int isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();
    for (int i = 0; i <= N - M; i++) {
        int j;
 
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
 
        if (j == M)
            return i;
    }
 
    return -1;
}


void printArraystring(string,int);

void sort(string s[], int n)
{
    for (int i=1 ;i<n; i++)
    {
        string temp = s[i];
 
        int j = i - 1;
        while (j >= 0 && temp.length() < s[j].length())
        {
            s[j+1] = s[j];
            j--;
        }
        s[j+1] = temp;
    }
}
  
// Function to print the sorted array of string
void printArraystring(string str[], int n)
{
    for (int i=0; i<n; i++)
        cout << str[i] << endl;
}
 
// Driver function
int main()
{
    ll n;cin>>n;
    string arr[n];
    rep(i,0,n) cin>>arr[i];
  //  string arr[] = {"GeeksforGeeks", "I", "from", "am"};
  //  int n = sizeof(arr)/sizeof(arr[0]);
     
    // Function to perform sorting
    sort(arr, n);
    ll i;
    for(i=0;i<n-1;i++)
    {
        int res=isSubstring(arr[i],arr[i+1]);
        if(res==-1)
            break;
        else
            continue;
    }
    if(i==n-1)
    {
        cout<<"YES"<<endl;
        printArraystring(arr, n);
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}