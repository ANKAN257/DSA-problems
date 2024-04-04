#include <bits/stdc++.h> 
using namespace std; 
#define int long long 
int32_t main(){
  int t; 
cin>>t; 
while(t--){ 
int n; 
cin>>n; 
vector<int>a(n); 
int sum = 0; 
for(int i=0;i<n;i++) { 
cin>>a[i]; 
sum+=a[i]; 
} 
int k = sum/n; 
int budget =0; 
bool temp = true; 
for(int i =0;i<n;i++){ 
 if(a[i]>k){ 
budget+=a[i]-k; 
} 
else if(a[i]<k){ 
     if(budget>=k-a[i]){ 
 budget-=(k-a[i]); 
 } 
else{ 
 temp = false; 
 break; 
} 
 } 
 }  if(temp) cout<<"YES"<<endl; 
else cout<<"NO"<<endl; 
 }
}