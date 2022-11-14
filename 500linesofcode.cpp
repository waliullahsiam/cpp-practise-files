#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // ll n, m;

    // cin >> n >> m;
    // if (m > 1)
    // {
    //     cout << n * (m - 1);
    // }

    // else

    // {
    //     cout << n - 1;
    // }
    // return 0;

    int n,m;
    cin>>n>>m;
    int arr[m];

    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+m);
    int mini=arr[m-1]-arr[0];
    int demo_val=0;

    for(int i=n;i<=m;i++)
    {
        demo_val=abs(arr[i-n]-arr[i-1]);

        mini=min(mini,demo_val);

    }

    cout<<mini<<endl;
    return 0;
 
}