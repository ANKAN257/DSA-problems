#include<bits/stdc++.h>

using namespace std;


int main(){
   
   
   string str;
   cin>>str;
   int n=str.size();
   stack<char>st;
   bool balanced = true;//initially is balanced


   for(int i=0; i<n; i++){
       if(str[i]=='('||str[i]=='{'||str[i]=='[') st.push(str[i]);
       
       else if(str[i] == ')' || str[i] == '}' || str[i] == ']'){

             if(st.empty()){
                balanced = false;
                break;
             }
             char ch=st.top();st.pop();
             if((str[i]==')'&&ch!='(')||(str[i]=='}'&&ch!='{')||(str[i]==']'&&ch!='[')){
                 balanced=false;
                 break;
             }
       }

   }
   if(!st.empty())balanced=false;
   
   if(balanced)cout<<"balance parenthesis";
   else cout<<"NOT balance parenthesis";


    

}