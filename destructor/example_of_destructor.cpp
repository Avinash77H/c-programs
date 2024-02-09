#include<iostream>
using namespace std;
class deploy{
    int a,b;
    public:
    deploy(void);
    void printdata(){
        cout<<"value of a is:"<<a<<endl;
        cout<<"value of b is:"<<b<<endl;
    }
    ~deploy(){
        cout<<"time to call destructor"<<endl;
    }
    
};
deploy::deploy(void){
    a=10;
    b=23;
}
int main(){
    deploy obj;
    obj.printdata();
    return 0;
}