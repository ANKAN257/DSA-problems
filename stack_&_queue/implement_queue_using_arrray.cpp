#include<bits/stdc++.h>

using namespace std;
#define MAX_SIZE 100
class class_queue{
  int arr[MAX_SIZE];
  int frontIdx;
  int rearIdx;
  public:
   void push_fun(int val);
   void pop_fun();
   int top_fun();
   bool isEmpty_fun();
   int size_fun();
  
//contructor
class_queue(int size){
    frontIdx=-1;
    rearIdx = -1;
}
};

void class_queue::push_fun(int val){
    if(rearIdx==MAX_SIZE-1){
          cout<<"queue is full now!"<<endl;
          return ;
    }else kif(isEmpty_fun()){
         frontIdx=0;
         rearIdx=0;
    }
    arr[rearIdx++]=val;
}

bool class_queue::isEmpty_fun(){
     return frontIdx=-1&&rearIdx==-1;
}

void class_queue::pop_fun(){
     if(isEmpty_fun()){
        cout<<"Empty queue "<<endl;
     }else if(frontIdx==rearIdx){
         frontIdx = -1;
         rearIdx  = -1;
     }
      frontIdx++;
}

int class_queue::top_fun(){
     if(isEmpty_fun()){
        cout<<"queue is empty"<<endl;
        return -1;
     }

    return  arr[frontIdx];
}

int class_queue::size_fun(){
    if(isEmpty_fun) return 0;
    return rearIdx-frontIdx+1;
}


int main(){





}