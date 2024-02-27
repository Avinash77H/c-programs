#include<iostream>
using namespace std;
class base{
    public:
    int base_variable;
    void display(){
        cout<<"value of basevariable:"<<base_variable<<endl;
    }
};
class derived :public base{
    public:
    int derive_variable;
    void display(){
        cout<<"value of derive_variable is:"<<derive_variable<<endl;
        cout<<"value of base_variable is:"<<base_variable<<endl;
    }
};
int main(){
    base * base_ptr;
    base base_obj;
    derived derive_obj;
    base_ptr=&derive_obj;// pointing base class pointer to derived class
    base_ptr->base_variable=77;
    // base_ptr->derive_variable=88;// will be throw an error
    
    base_ptr->display();
    
    derived * derive_ptr;
    derive_ptr=&derive_obj;
    derive_ptr->derive_variable=88;
    derive_ptr->display();

    return 0;
}