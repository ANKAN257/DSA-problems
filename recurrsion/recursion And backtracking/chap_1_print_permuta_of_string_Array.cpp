#include<bits/stdc++.h>
using namespace std;

void permutation_recu(int arr[],int n,vector<int>&v,vector<vector<int>>&ans,bool taken[]){
    
    if(v.size()==n){
        ans.push_back(v);
        return;
    }
   for(int i=0;i<n;i++){
       if(!taken[i]){
          taken[i] = true;
          v.push_back(arr[i]);
          permutation_recu(arr,n,v,ans,taken);
          v.pop_back();
          taken[i] = false;

       }
   }


}
int get();
//swap method

void permutation_swap(int idx,int arr[],int n,vector<vector<int>>&ans){
//base case
if(idx==n){
    vector<int> v(arr, arr + n);
   ans.push_back(v);
   get();
   return;
}


 for(int i=idx;i<n;i++){
     swap(arr[idx],arr[i]);
    permutation_swap(idx+1,arr,n,ans);
    swap(arr[idx],arr[i]);
 }

}



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)cin>>arr[i];
    
  
   vector<int>v;
   vector<vector<int>>ans;
   bool taken[n]={0};
   permutation_swap(0,arr,n,ans);

//   permutation_recu(arr,n,v,ans,taken);

  // Print the Permutation
    for (int i = 0; i < ans.size(); i++) {
        cout << "Permutation : ";
        for (auto it : ans[i]) {
            cout << it << " ";
        }
        cout<<endl;
        
    }

}