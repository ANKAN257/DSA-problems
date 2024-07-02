#include<bits/stdc++.h>
using namespace std;

class QueueUStack{
    stack<int> st1; // Stack for enqueue
    stack<int> st2; // Stack for dequeue

   
  public:
     
     void push(int val){
       

        st1.push(val);// if we remove above satement the we will use double stack
     }

     void pop(){
        if(isEmpty()){ 
            cout<<"queueu is empty!";
            return;
        } 
       while(!st1.empty()){
          st2.push(st1.top());
          st1.pop();
       }

       st2.pop();

       while(!st2.empty()){
          st1.push(st2.top());
          st2.pop();
       }
       

     }
     
     int front (){
        if(isEmpty()){ 
             cout<<"queueu is empty!";
            return -1;
        } 
       while(!st1.empty()){
          st2.push(st1.top());
          st1.pop();
       }

       int front_ele=st2.top();

       while(!st2.empty()){
          st1.push(st2.top());
          st2.pop();
       }
       return front_ele;

     }


     bool isEmpty(){
        return st1.empty();
     }

};


int main(){
  QueueUStack q;
  q.push(1);//front ele in queue
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);
  // Display front element
    cout << "Front element: " << q.front() << endl;
       q.pop();
       q.pop();
    // Display front element after dequeue
    cout << "Front element after dequeue: " << q.front() << endl;


}