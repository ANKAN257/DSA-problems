#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
       int n,k;
       cin>>n>>k;
      int b[n+1];
      int pro=1;
       for(int i=0;i<n;i++){
        cin>>b[i];
        pro*=b[i];
       }
     
      if(2023%pro){
        cout<<"no"<<endl;
      }else{
        cout<<"yes"<<endl;
        for(int i=1;i<k;i++){
            cout<<1<<" ";
        }
        int val=2023/pro; 
        cout<<val<<endl;
      }


    }
}