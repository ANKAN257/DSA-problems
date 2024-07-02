#include<bits/stdc++.h>
using namespace std;

void sum_fun(int n,int sum){
      if(n<1){
         cout<<"\nsum : "<<sum <<endl;
         return;
      }
      cout<<n<<" ";
     sum_fun(n-1,sum+n);//
}

int sum_fun_fun(int n){
   
   if(n==0){
     return 0;
   }

  return n+sum_fun_fun(n-1);

}


int main(){
    int n;
    cin>>n;
//    sum_fun(n,0);
   cout<<"sum : "<<sum_fun_fun(n);

}