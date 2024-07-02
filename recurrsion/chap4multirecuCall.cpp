#include<bits/stdc++.h>
using namespace std;
int fib(int n){
     if(n<=1){
         return n;
     }
     //let n=4
     int last=fib(n-1);// =3  , 2 ,1=1,0=0
     int slast=fib(n-2);//=2  , 0
    return last+slast;
}


int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
}