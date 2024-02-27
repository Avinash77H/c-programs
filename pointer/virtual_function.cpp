#include<iostream>
using namespace std;
class base{
    public:
    int base_variable=17;
    virtual void display(){
        cout<<"value of basevariable:"<<base_variable<<endl;
    }
};
class derived :public base{
    public:
    int derive_variable=55;
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
    base_ptr->display();/* calling of derive class function because
                            we use virtual function in base class*/
    
    

    return 0;
}