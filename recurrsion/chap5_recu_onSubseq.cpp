#include<bits/stdc++.h>
using namespace std;

void printSubSeq(vector<int>&arr,int n,int index,vector<int>&ds){
    if(index==n){
         for(auto it:ds){
             cout<<it<< " ";
         }
         cout<<endl;
         return;
    }     

     ds.push_back(arr[index]);
     printSubSeq(arr,n,index+1,ds);
    ds.pop_back();

    printSubSeq(arr,n,index+1,ds);

  

}




int main(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
     vector<int>ds;
    printSubSeq(arr,n,0,ds);

      

    
}