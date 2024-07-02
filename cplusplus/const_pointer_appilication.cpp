#include<iostream>
using namespace std;

int main(int argc, char*argv[]){
  int val=20;
  int *ptr_to_int;
  const int *ptr_to_const_int=&val;
//   *ptr_to_const_int=10;//error: assignment of read-only location '* ptr_to_const_int'
// const int or int const dono same hai
// int const *ptr_to_const_int=&val

int *const const_ptr_to_int=&val;
 
const int *const const_pointer_to_const_int=&val;


   
int a[5]={1,2,3,4,5};
int *p=(int*)(&a+1);//shifing the pointer by sizeof(a)=total_ele_count*sizeof(a[0])
cout<<5*sizeof(a[0])<<endl;
cout<<&a+1<<endl;
cout<<*(a+1)<<endl;//a is pointer 
cout<<(*p-1)<<endl;



}