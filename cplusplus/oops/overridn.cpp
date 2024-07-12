#include<bits/stdc++.h>

class parent{
    public:
       void print(){
         cout<<"parent";
       }
};

class childc :public parent{
     void print(){
         cout<<"child";
     }
};

int mian(){
    parent *p=new parent();//
    parent *ch=new childc();//
    // p=&ch;

    //compiler - function call pe defintion bind krta 
    p->print();
    ch->print();


}