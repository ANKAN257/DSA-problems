#include<iostream>
using namespace std;
long long gcd(long long int a, long long int b) 
{ 
  if (b == 0) 
    return a; 
  return gcd(b, a % b); 
} 
long long lcm(int a, int b) 
{ 
    return (a / gcd(a, b)) * b; 
} 

int main(){
    int t;
    cin >> t;
    while(t--){
      long long a, b;
       cin>>a>>b;
       long long temp=lcm(a,b);
       int x=(temp==b?b/a:1);
       cout<<temp*x<<endl;


    }
}