#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int num;
    cin >> num;
    int lo=0, hi=n-1, mid=0, flag=0, temp=0, g=0;
    int ans=0;
    for(int i=0;i<100;i++)
    {
        if(lo>hi) break;
        mid=(lo+hi)/2;
        if(arr[mid]==num)
        {
            lo=mid+1;
            // flag=1;
            // g++;
            // if(g==1) temp=mid;
            // else if(g>=2)
            // {
            //     ans=(n-1)-mid;
            // }
            ans=mid;
        }
        else if(num>arr[mid])
        {
            lo=mid+1;
        }
        else if(num<arr[mid])
        {
            hi=mid-1;
        }
    }
    // if(g==1)
    // {
    //     cout<<(n-1)-temp<<endl;
    // }
    // else 
    // {
    //     //cout << 'a' << endl;
    //     cout << ans << endl;
    // }
    cout << (n-1)-ans << endl;


}