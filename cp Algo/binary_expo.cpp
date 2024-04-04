
#include<bits/stdc++.h>
using  namespace  std;
int main(){
  int power,base;
  cin>>power>>base;
  int ans=1;
  while(power){
    if(power%2){
        ans*=base;
        power--;
    }else{
      base*=base;
      power/=2;

    }
  }
  cout<<ans<<endl;

} 
