#include <bits/stdc++.h>
using namespace std;


int main(int argc, char* argv[] ){
    //int argc: This parameter represents the number of command-line arguments passed to the program, 
    //including the name of the program itself.
    // char* argv[]: cmd line argument
    // Each element of this array corresponds to one command-line argument.

    cout<<"Number of cmd line arguments: "<<argc<<endl;

    for(int i=0; i<argc; i++){
        cout << "Argument " << i << ": " << argv[i] << endl;
    }


  return 0;
}