#include<bits/stdc++.h>
using namespace std;
int mod =1e9+7;
int main(){

   int t;
   cin>>t;
   while(t--){
    long long a,b;
    cin>>a>>b;
    if((a+b)&1)
        cout<<"Alice"<<endl;
    else 
      cout<<"Bob"<<endl;    

   }


}