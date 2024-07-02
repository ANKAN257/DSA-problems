#include <iostream>
using namespace std;
typedef int type_a;
typedef float type_b;
//Compare and explain these 2 lines of cod
// int (*fun)(char); //function pointer -A function that takes a single char argument and returns an int
// int * fun(char); // A function which retruns a pointer to an int 



void func(type_a a, type_b b) {
    printf("Function called with %d and %f\n", a, b);
}

int exampleFunction(char c) {
    return (int)c; // Cast char to int
}

int *function(char c){
    static int val;
    val=(int)c;//assign val as run time
    return &val;
}


int main(){
 //  *  dereferce operator- access the value stored at memory location to which pointer is pointing 
 //  it allow to work with actual value 
 //  & address of operator
int x=10;
 int *ptr;
 ptr=&x;
 cout<<"x value : "<<x<<"\nptr location value : "<<ptr<<"\nvalue at ptr pointing to memory location "<<*ptr<<endl;

//two pointer 
int a=20;
int *p=&a;
*p=30;//change the value at memory location a=30

int **ptrptr=&p;
cout<<&p<<"   "<<ptrptr<<endl;


void (*fptr)(type_a, type_b) = &func;
   type_a val1= 5;
    type_b val2= 3.14;
    fptr(val1, val2); // Call the function


 int (*fun)(char) = exampleFunction; // Assign the function to the pointer
    int result = fun('J'); // Use the function pointer 
    cout<<result<<endl;   


int *ans=fun('A');
cout<<ans<<endl;

}