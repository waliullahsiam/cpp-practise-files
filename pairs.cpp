#include<bits/stdc++.h>
using namespace std;
int main()
{
    // 1. pair<int,string>p;
    //1. p={2,"abcdef"};//inserting process

    //1. cout<<p.first<<" "<<p.second;


    //2. we wanna copy the values to another pair;

   //2. p={2,"awef"};

    // pair<int,string>&i=p;
    // i.first=3;//2. p will not change the value cause copy is created over here.//will change when we use & (call by reference concept)

    // cout<<p.first<<" "<<p.second;











    //3. a[]={1,2,3},b[]={2,3,4};
    //suppose the index of arrays are interconnected to each other
    //now you have to track down the indexes properly using PAIRS;

    int arr[]={1,2,3};
    int arr2[]={2,3,4};

    pair<int,int>p[3];//array created with the help of pairs.
     p[0]={1,2};
     p[1]={2,3};
     p[2]={3,4};

     for(int i=0;i<3;i++){
        cout<<p[i].first<<" "<<p[i].second<<endl;
     }

     //after swapping
     swap(p[0],p[2]);
       for(int i=0;i<3;i++){
        cout<<p[i].first<<" "<<p[i].second<<endl;
     }


    





}