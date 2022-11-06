#include<bits/stdc++.h>
using namespace std;

void printVec(vector<string>&vec)//(&) prevents the copy it helps to send the real vector not its copy
{ 
    // cout<<vec.size()<<endl;
     for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
}
int main()
{
    // vector<int>vec(10,3); //part-1 data type declaration vec(10) means size of the vector is 10; 
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     int x;
    //     cin>>x;
    //     vec.push_back(x);//main difference between vector and array is you need a variable inside a loop;

    // } 

    // vec.push_back(7);//part 2
    // printVec(vec);

    // // cout<<"After popback usage";
    // // vec.pop_back();
    // // printVec(vec);


    //part3 //  vector<int>v2=vec;//copy concept
    // v2.push_back(5);
    // printVec(v2);
    // cout<<endl;
    // printVec(vec);

    //string vector
    vector<string>vec;
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        vec.push_back(str);
        
    }
    printVec(vec);

   




}

