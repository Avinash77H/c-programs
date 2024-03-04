#include<iostream>
using namespace std;
template<class T1,class T2>
class demo{
    T1 data1;
    T2 data2;
    public:
    demo(T1 x,T2 y){
        data1=x;
        data2=y;
    }
    void display(){
        cout<<"data 1 is:"<<data1<<endl;
        cout<<"data 2 is:"<<data2<<endl;
    }
};
int main(){
    demo <float ,char>obj(4.5,'A');
    obj.display();
    
    return 0;
}