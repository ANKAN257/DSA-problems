
#include<bits/stdc++.h>
using namespace std;
//typedef -: user defined data type
//not create new class

typedef long long ll;// is used to create new names (aliases) for existing types.
                    // respect the type safet
typedef unsigned long ulong ;
typedef struct {
    int x,y;
}   Point ;               
#define  Name value_or_expression   //is a preprocessor directive used to create object-like macros or function-like macros.
                                    //    It can define constants, expressions, or simple macros for code substitution. 
                                    // not respect type safety
                                    //   performs raw text substitution without type checking.
// #define FUNCTION_MACRO(parameters) expression
#define PI 3.14159
#define MAX(a, b) ((a) > (b) ? (a) : (b))

//both use to create aliases ,but have diff purpose 

int main(){
    Point p1;
    p1.x=10;
    p1.y=20;

    double area=PI*5*5;
    int maxValue=MAX(2,7);

    cout<<p1.x<<" "<<p1.y<<endl;
    cout<<"area: "<<area<<endl;
    cout<<"maxValue: "<<maxValue<<endl;

}