#include<iostream>
using namespace std;
class base1{
    int data1;
    public:
    base1(int a){
        data1=a;
        cout<<"base1 constructor called"<<endl;
    }
    void showdata1(){
        cout<<"data 1 is:"<<data1<<endl;
    }

};
class base2{
    int data2;
    public:
    base2(int b){
        data2=b;
        cout<<"base2 constructor called"<<endl;
    }
    void showdata2(){
        cout<<"data 2 is:"<<data2<<endl;
    }

};
class derived:public base1,public base2{
    int derivedata1,derivedata2;
    public:
    derived(int a,int b,int c,int d):base1(a),base2(b){
        derivedata1=c;
        derivedata2=d;
        cout<<"derived class constructor called"<<endl;
    }
    void showderivedata(){
        cout<<"derivedata 1 is:"<<derivedata1<<endl;
        cout<<"derivedata 2 is:"<<derivedata2<<endl;
    }
};
int main(){
    derived obj(10,20,30,40);
    obj.showdata1();
    obj.showdata2();
    obj.showderivedata();
    return 0;
}