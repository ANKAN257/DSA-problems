#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> subsets;
void subSet_sum(int idx,int sum,int arr[],int n,vector<int>&v,vector<int>&temp){
    if(idx==n){
        v.push_back(sum);
        subsets.push_back(temp);
        return ;  
    }    
   temp.push_back(arr[idx]);
   subSet_sum(idx+1,sum+arr[idx],arr,n,v,temp);//picking the current ele and add to sum
   temp.pop_back();
   subSet_sum(idx+1,sum,arr,n,v,temp); //not pickinfg the current ele 
}


int main() {
    int n;
    cin>>n;
    int arr[n];
   for(int i=0; i<n; i++)cin>>arr[i];//no duplicate are here 

   vector<int>v;
   vector<int>temp;
   
   subSet_sum(0,0,arr,n,v,temp );
   int target=10;
    
   // Print the subsets and their sums
    for (int i = 0; i < subsets.size(); i++) {
       if(v[i]==target){
        cout << "Subset: ";
         for (auto it : subsets[i]) {
            cout << it << " ";
        }
        cout << " Sum: " << v[i] << endl;
       }
       
        
    }

  

}