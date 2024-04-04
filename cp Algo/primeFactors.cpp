
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
   cin >> n;
   int arr[n+1];
   for(int i=1;i<=n;i++)
       arr[i]=-1;

    for(int i = 2; i<=n; i++){
        if(arr[i]==-1){
            for(int j=i;j<=n;j+=i){
                if(arr[j]==-1){
                    arr[j]=i;
                }
            }
            
        }
    }
    for(int i=2;i<=n;i++){
        cout<<arr[i]<<" ";
    }

  


}