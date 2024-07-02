#include<bits/stdc++.h>
using namespace std;

void  bruteForce_fun(vector<int>&arr,int n){
     vector<int>ans(n,-1);
     for(int i=0;i<n;i++){
         for(int j=i+1;j<n;j++){
              if(arr[i]<arr[j]){
                   ans[i]=arr[j];
                   break;
                }
               
         }
     }
for(int i=0;i<n;i++)cout<<ans[i]<<" ";

cout<<endl;

}

void using_stack_from_last_index(vector<int>&arr,int n){
   stack<int>st;
   vector<int>ans(n,-1);

   for(int i=n-1;i>=0;i--){
        while(!st.empty()&&arr[i]>=st.top()) st.pop();
        
        if(!st.empty()&& st.top()>arr[i]) ans[i]=st.top(); 

     
        st.push(arr[i]);

   }

   for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

}

void using_stack_from_first_index(vector<int>&arr,int n){
       stack<int>st;
   vector<int>ans(n,-1);


   for(int i = 0; i < n; i++){

        while(!st.empty()&&arr[i]>arr[st.top()]){ // arr[1] arr[st.top()=idx  hai]
            ans[st.top()] = arr[i];
             st.pop();
        }
       
        
   
        st.push(i);// 0-5,1-3,2-1,
   }
   for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

}
//5 
//5 3 1 2 4

int main(){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)cin>>v[i];
        stack<int>st;

        bruteForce_fun(v,n);
        cout<<endl;
        using_stack_from_last_index(v,n);

        cout<<endl;
        using_stack_from_first_index(v,n);

}