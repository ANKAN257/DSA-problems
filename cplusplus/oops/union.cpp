#include <iostream>
using namespace std;
//union :- user define data type 
//all member share the same memory location
// chaneg in one var can reflect into another var

// Internally, a union in C++ allocates memory for its largest member.
//size of int =4bytes
//char =1byte
//float=4bytes
// double =8bytes


// In this union, Data, you can only use one of x, y, c, a, or d at a time.
// Assigning a value to one member will overwrite the values of other members, as they share the same memory location.
union Points{
  int x, y;
  char c;
  char name[20];//1*30=30 bytes
  float a;
//   double d;
} ;

union InnerU{
  int i;
  float j;
  double k;//8 byte hai szieof inner union is 8 bytes
  char ch;
};

union outerU{
  InnerU innerU_obj;
  double dble;
//   char fname[20];
};





int main(){

   union outerU outer;
   outer.innerU_obj.i=200;
   cout<<outer.innerU_obj.i<<endl;
   cout<<sizeof(outer.innerU_obj)<<endl;
   cout<<sizeof(outer)<<endl;
   




   union  Points p;
   p.x=20;
    cout<<p.x<<endl;

   p.y=30;//override the value here 
    cout<<p.y<<endl;

   p.a=1.5f;//overring also here 
   cout<<p.a<<endl;
//    p.d=9.68987;
//    cout<<p.d<<endl;
   p.c='A';
   cout<<p.c<<endl;
  cout<<sizeof(p)<<endl;
}