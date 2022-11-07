#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define MAX_SIZE 100
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //GAMES>>>>>>

    // int n,count=0;
    // cin>>n;
    // int arr1[n],arr2[n];
    // for(int i=0;i<n;i++)
    // {
    //     cin>>arr1[i]>>arr2[i];
    // }

    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         if(arr1[i]==arr2[j] )
    //         {
    //             count++;
    //         }
    //     }
    // }
    

   

  
    

    // cout<<count<<endl;
   


//finding duplicates and unique in an array

// int n,duplicate=0,unique=0;
// cin>>n;
// vector<int>vec(n);
// for(int i=0;i<n;i++)
// {
//     cin>>vec[i];
// }

// int dummy_arr[n+1]={0};
// for(int i=0;i<n;i++)
// {
//     dummy_arr[vec[i]]++;
// }


// for(int i=0 ; i<n ;  i++)
// {
//     if(dummy_arr[vec[i]]==1)
//     {
//         unique++;
        
//     }

//     else
//     {
//         duplicate++;

//     }
// }

// cout<<unique<<endl;

// cout<<duplicate<<endl;

//Games practise

// int a,count=0;
// cin>>a;

// int arr1[a],arr2[a];

// for(int i=0;i<a;i++)
// {
//     cin>>arr1[i]>>arr2[i];

// }


// for(int i=0;i<a;i++)
// {
//     for(int j=0;j<a;j++)
//     {
//         if(arr1[i]==arr2[j])
//         count++;
//     }
// }

// cout<<count;
int n;
cin>>n;

int arr[n][n];

for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        cin>>arr[i][j];
    }
}
int sum=0;

for(int i=0;i<n;i++)
{
    sum+=arr[i][i];
}

cout<<sum;


    
   
   
    
    return 0;
    
}