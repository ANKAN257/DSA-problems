#include <bits/stdc++.h>
using namespace std;
void subSet_sum_II(int idx,int arr[],int n,vector<int>&v,vector<vector<int>> &subsets){
    
    subsets.push_back(v);
   
   
  for(int i=idx;i<n;i++){
      // Skip duplicates
      if(i!=idx&&arr[i]==arr[i-1])continue;//for avoiding the duplicate 

      v.push_back(arr[i]);//pick the current value
      subSet_sum_II(i+1,arr,n,v,subsets);
      v.pop_back();//backtrack and remove

  }

}


//appraoch 
//brute force genearte all subset 

int main() {
    int n;
    cin>>n;
    int arr[n];
   for(int i=0; i<n; i++)cin>>arr[i];//duplicate data are allow 
   
   sort(arr,arr+n);//handle duplicate

   vector<int>v;
   vector<vector<int>> subsets;

   subSet_sum_II(0,arr,n,v,subsets);

    // Print the subsets and their sums
    for (int i = 0; i < subsets.size(); i++) {
        cout << "Subset: ";
        for (auto it : subsets[i]) {
            cout << it << " ";
        }
        cout<<endl;
        
    }

  

  

}