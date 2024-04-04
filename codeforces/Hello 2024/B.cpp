#include<bits/stdc++.h>
using namespace std;
int mod =1e9+7;
int main(){

   int t;
   cin>>t;
   while(t--){
      string s;
      int n;
      cin>>n>>s;
      int ansSum=0;
      int cntm=0,cntp=0;
      for(auto i:s){
        if(i=='-')cntm+=1;
        else cntp+=1;
      }
      cout<<abs(cntp-cntm)<<endl;
      
     
     


   }


}