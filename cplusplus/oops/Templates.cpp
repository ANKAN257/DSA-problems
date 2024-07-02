#include<bits/stdc++.h>
using namespace std;

// template ;- to pass data type as parameter
//create a function or class to work with any data type without rewritting the same code for specific type

template <typename T>
T getmax(T a,T b){
     return  (a>b) ? a : b;
}

int main(){
 cout<<getmax(1,4)<<endl;
 cout<<getmax('a','b')<<endl;
 cout<<getmax(2.4,4.2)<<endl;

}