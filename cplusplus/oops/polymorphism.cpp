#include<iostream>
using namespace std;


//compile time polymorphims :- 1>function overlaoding  2> operator overlaoding
//compiler determines which function call to bind to the object

// 1>function overlaoding:- when there are multiple function with diff return type and parameters ,but have same name 
                    //  --changing the number of arguments and type of argumen


class polymorphism {
    public :

        void function_Overlaoding(int x){
              cout<<x<<endl;
        }
        void function_Overlaoding(int a ,char c){
               cout<<a<<"   "<<c<<endl;
        }
      int function_Overlaoding(int x,int y,int z){
          return x*y*z;
      }

      void overriding_function(){
           cout<<" overriding function in base class"<<endl;
      }


};


class operator_Overlaoding : public polymorphism{ //operator in c++ has differnt meaning for the data type 
   private:
     int x;
     int y;
     public :
     operator_Overlaoding(int real=0,int imag=0){
          x=real; 
          y=imag;
     }
     operator_Overlaoding operator+ (operator_Overlaoding const &obj){
        operator_Overlaoding ans;
         ans.x=x+obj.x;
         ans.y=y+obj.y;
     }
     void display(){
        cout<<x<<"  +  i "<<y<<endl<<endl;
     }

 

};



//run time polymorphims:- achiev by function overriding
//                      --late binding or dynamic binding
                       
//we know that function call is resolved at run time                        
 
//function overriding:- child function has defintion of member function of base class 
 class overriding_polymorphism : public polymorphism{
   public :
     void overriding_function(){
         cout<<" overriding function in child class "<<endl
     }
 
 };


int main(){
     polymorphism obj;
      obj.function_Overlaoding(10);
      obj.function_Overlaoding(20,'a');
      int ans=obj.function_Overlaoding(20,30,7);
      cout<<ans<<endl<<"\noperator_Overlaoding \n";

      operator_Overlaoding oo1(10,3),oo2(4,8);
      operator_Overlaoding oo3=oo1+oo2;
      oo3.display();    


}