#include<iostream>
using namespace std;
class complex{
    public:
    int a,b;
    void set_data(int x,int y){
        a=x;
        b=y;
    }
    void show_data(){
        cout<<"value of a:"<<a<<endl;
        cout<<"value of b:"<<b<<endl;
    }
};
int main(){
    // complex c;               
    //  c.set_data(4,5);
    //  c.show_data();

// pointer to object//
    complex c1;
     complex* ptr=&c1;
//   complex *ptr=new complex;  (also write using new operator) 
//    (*ptr).set_data(5,10); is exacly same as
   ptr->set_data(5,10); // used arrow operator
   
  // (*ptr).show_data();ia exactly same as
  ptr->show_data();

/// array of objects ///
complex *ptr1=new complex[4];
ptr1->set_data(1,2);
ptr1->show_data();
(ptr1+1)->set_data(3,5);
(ptr1+1)->show_data();



    return 0;
}