#include<iostream>
#include<string>
using namespace std;
void print_num()
{
    if(i>5)return;
    cout<<i<<endl;
    print_num()
}

void print(int i,int n)
{ 
    if(i>n)return;
    cout<<"ankan"<<endl;
   print(i++,n);
   

}
int main()
{ 
 int i=0,n=5;
   print(i,n);
}