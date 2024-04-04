#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int x,n;
        cin>>x>>n;
        int temp=x/n;
        set<int>st;
        for(int i=1;i<n;i++){
            if(x%i==0){
                st.insert(i);
                st.insert(x/i);
            }
        }
        auto p=st.lower_bound(temp);
        if(*p>temp)p--;
        cout<<*p<<endl;
 
    }
}