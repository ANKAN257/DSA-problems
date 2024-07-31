#include<bits/stdc++.h>
using namespace std;
int main(){
   
    string strSen="ram amaa";
    cin>>strSen;
    int n=strSen.size();
   stack<string>st;

     string str="";
   for(int i=0; i<n; i++){
        if(strSen[i]!=' '){
             str+=strSen[i];
        }else{
          st.push(str);
          str="";
        }
   }
st.push(str);


   while(!st.empty()){
       string temp=st.top();
       cout<<temp<<" ";
       st.pop();
   }

}