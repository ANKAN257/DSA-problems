#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    if(n==2||n==3) cout<<"prime"<<endl;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
           cout<<"not prime"<<endl;
        }else
         cout<<"prime"<<endl;
    }
}