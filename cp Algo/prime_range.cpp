#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) { 
    if (n <= 1) 
        return false;
        if(n==2||n==3) return true; 
      for(int i=2;i*i<n;i++){
        if(n%i == 0){
            return false;
            break;
        }
      }
    return true; 
}

int  main(){
    int l,r;
    cin>>l>>r;
    int cnt=0;
    for(int i=l;i<r;i++){
        if(isPrime(i)){
            cnt++;
            cout<<i<<" ";
        }
    }
    cout<<endl<<cnt;

    if(isPrime(cnt))
       cout<<"\nNot prime prime"<<endl;
    else 
         cout<<"\nprime prime"<<endl;
}