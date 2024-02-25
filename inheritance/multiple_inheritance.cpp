#include<iostream>
using namespace std;
class base1{
    protected:
    int data1;
    public:
    void set_data1(int);
    // void show_data1();
};
void base1 :: set_data1(int a){
    data1=a;
}
// void base1 ::show_data1(){
//     cout<<"value of data1 is : "<<data1<<endl;
// }
class base2 {
    protected:
    int data2;
    public:
    void set_data2(int);
    // void show_data2();
};
void base2 :: set_data2(int b){
    data2=b;
}
// void base2:: show_data2(){
//     cout<<"value of data 2 is:"<<data2<<endl;
// }
class derived :public base1,public base2{
    int sum;
    public:
    void set_sum(){
        sum=data1+data2;
    }
    void show_data(){
        cout<<"data 1 is: "<<data1<<endl;
        cout<<"data 2 is : "<< data2<<endl;
        cout<<"sum of both data  is :"<<sum<<endl;
    }
};
int main(){
    derived obj;
    obj.set_data1(10);

    obj.set_data2(20);
     obj.set_sum();
    obj.show_data();
    return 0;
}