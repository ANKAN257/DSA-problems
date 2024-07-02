#include<iostream>
using namespace std;
// Enumeration -: (enum) user define data type 
// mainly used to assign names to integral constants,
//the names make a program easy to read and maintain.

enum nameOfEnum{
   varName=1,
   varname2=3,
   varnam3=4
};
enum week {
     mon,tue,wed,thu,fri,saturday //ye v 0 se start ho rha hai 
};


int main(){
   
   enum nameOfEnum en=varname2;
   enum nameOfEnum p=varnam3;
   cout<<p<<endl;
   cout<<en<<endl;
   enum week day;
   day=wed;
   cout<<day<<endl;

}