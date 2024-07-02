#include<bits/stdc++.h>
using namespace std;



void printC(int ht){

     for(int i = 0; i < 1; i++){
         for(int j = 0; j <ht ; j++){
                 cout<<"*"<<" ";
         }
         cout<<"\n";
     }
         for(int i = 0; i < ht-2; i++){
         for(int j = 0; j <1 ; j++){
                 cout<<"*"<<" ";
         }
         cout<<"\n";
     }

      for(int i = 0; i < 1; i++){
         for(int j = 0; j <ht ; j++){
                 cout<<"*"<<" ";
         }
         cout<<"\n";
     }

}

  
void printB(int ht){

  for(int i = 0; i < ht; i++){
         
         for(int j = 0; j <=ht ; j++){
          if(i%2==0&&j<ht-1)
                { cout<<"*"<<" ";}
               
            else if(i%2!=0&&(j==0||j==ht))
                        cout<<"*"<<" ";     
            else 
            cout<<"  ";
         }
         cout<<"\n";
     }
 
 

}



int main(){
    int ht;
    cout<<"enter the number : ";
    cin>>ht;
    // printA(ht);
    printB(ht);
    // printC(ht);

}