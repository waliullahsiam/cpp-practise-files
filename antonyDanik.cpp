#include<iostream>
using namespace std;
int main(){
    int n,count1=0,count2=0;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            count1++;
        }
        else{
            count2++;
        }
    }
    if(count1>count2){
        cout<<"Anton";
    }
    if(count1==count2){
        cout<<"Friendship";
    }
    if(count1<count2){
        cout<<"Danik";
    }
    
}