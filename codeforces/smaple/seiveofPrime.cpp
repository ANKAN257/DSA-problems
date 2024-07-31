#include<bits/stdc++.h>

using namespace std;

void seive_fun(int n,int m){

vector<bool>v(n+1,true);

v[0]=v[1]=false;
for(int i=2;i<=n;i++){
   
   if(v[i]==true){
      for(int j=i*i;j<n;j+=i){
        v[j]=false;
      }
   }

}



for(int i=0;i<v.size();i++){
    cout<<i<<"  " <<v[i]<<endl;
}
vector<int>temp;
for(int i=0;i<v.size();i++){
     if(v[i]==1){
          temp.push_back(i);
     }
}

for(int i=0;i<m;i++){
    cout<<i<<"  " <<temp[i]<<endl;
}


}

solve_fun(int n,int m){




}


int main(){
    int n,m;
    cin>>n>>m;
    // seive_fun(n,m);
    solve_fun(n,m )
}