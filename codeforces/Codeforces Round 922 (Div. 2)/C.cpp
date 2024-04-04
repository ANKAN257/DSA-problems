#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,r;
        cin>>a>>b>>r;
        if(a>b){
            a=b;
            b=a;
        }

        int temp=b-a;
        int p=0;
        for(int i=60;i>=0;i--){
            if((a^b)>>i&1){
                if(p+(1<<i)<=r){
                    if((a>>i)&1==0){
                        if(1<<(i+1)<=temp){
                            p+=(1<<i);
                            temp-=(1<<(1+i));
                        }
                    }
                }
            }
        }

       cout<<temp<<endl;

    }


}
