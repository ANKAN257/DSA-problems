#include<bits/stdc++.h>
using namespace std;
int main(){
 
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
    cin>>arr[i];

 }

int cnt=0;
for(int i=0;i<n;i++){
    if(arr[i]<10&& arr[i]>=0)cout<<1;
    else if(arr[i]<100&& arr[i]>=10)cout<<2;
    else if(arr[i]<1000&& arr[i]>=100)cout<<3;
    else if(arr[i]<10000&& arr[i]>=1000)cout<<4;
    else if(arr[i]<100000&& arr[i]>=10000)cout<<5;
    else if(arr[i]<1000000&& arr[i]>=100000)cout<<6;
}




   vector<int>ans;
   // for(int i=0;i<n;i++){
   //     int x=arr[i];
   //     int cnt=0;
   //     while(x!=0){//11 ,,111
   //       //  int rem=x%10;//1 ,
   //        x/=10;//1 ,11 
   //        cnt++;//2  ,1 2 3
         
   //     }
   //    //  ans.push_back(cnt);//2 ,3
   //    cout<<cnt<<" ";
   // }

   // // for(int i=0;i<ans.size();i++){
   // //     cout<<ans[i]<<" ";
   // // }

}