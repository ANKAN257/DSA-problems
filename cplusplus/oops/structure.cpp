#include<iostream>
using namespace std;
//struct ;- user define data type 
//used to grouped the items of different types into single type

struct point{
 int x, y,z;
 

};


int main(){
   struct point p;
   p.x=20;
   p.y=30;
   p.z=abs(p.x-p.y);
   
   cout<<p.x<<" "<<p.y<<"  "<<p.z<<endl;
}