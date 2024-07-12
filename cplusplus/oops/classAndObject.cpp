#include<iostream>
using namespace std;

class Parent {
public:
    void funA() {
        print_fun();
    }
  virtual  void print_fun() {
        cout << "parent class" << endl;
    }
};

class ChildClass : public Parent {
public:
int x=20;
    void print_fun() {
        cout << "child class " << endl;
    }
};
//apti type ka adrss rkh skta
 class a *b=new a()

int main() {
    Parent p;
    p.funA();  // Calls Parent's funA(), which internally calls Parent's print_fun()

    ChildClass ch;
    ch.funA();  // Calls Parent's funA() (inherited), which internally calls ChildClass's print_fun()
   ch.print_fun();
   
   Parent *ptr=&ch;
   ptr->funA(); // Calls Parent's funA(), which internally calls ChildClass

    return 0;
}
