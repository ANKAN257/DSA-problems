#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
       int n,k;
       cin>>n>>k;
       string ans;
       for(int i=0;i<n*k;i++){
        ans+=char('a'+(i%k));
       }
       cout<<ans<<endl;
       
 
    }
    
}