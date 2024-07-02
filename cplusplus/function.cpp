//function is block scope
#include<iostream>
// #include<algorithm>
using namespace std;


//lambda function -------------
auto add=[](int a,int b)-> int{
    return a+b;
};
//[]- captures variables from surrounding scope
// -> int  speficied the lambda function return as int
// Lambda expressions create callable objects


//Inline function-----------------
// compiler generate machine code for the function's body at the point where the function called
//  rather than generating code for the function separately and then calling it.
// eliminating the function call overhead
//decision  to inline is made by the compiler 
//complex code k liye nhi hai 

inline int sum(int a,int b){
     return a+b;
}

int main(){  
  int ans=add(10,20);
  cout<<ans<<endl;
  int res=sum(10,20);//compile replace fun call with copy of fun's code at call site and avoiding the calling overhed
  cout<<res<<endl;
}
