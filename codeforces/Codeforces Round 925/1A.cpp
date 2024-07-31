#include<bits/stdc++.h>
using namespace std;
int mod=1000000000;

int main(){
    long long n,m,a;
    cin>>n>>m>>a;
   long long x,y;
   x=ceil(double(n)/a);
    y=ceil(double(m)/a);
    long long ans=x*y;
    cout<<ans<<endl;
    return 0;

}