#include<iostream>
using namespace std;
template<class T1=int,class T2=float,class T3=char>
class demo{
    T1 data1;
    T2 data2;
    T3 data3;
    public:
    demo(T1 x,T2 y,T3 z){
        data1=x;
        data2=y;
        data3=z;
    }
    void display (){
         cout<<"data 1 is:"<<data1<<endl;
         cout<<"data 2 is:"<<data2<<endl;
         cout<<"data 3 is:"<<data3<<endl;
    }
    
};
int main(){
    demo<>obj(2,2.3,'A');
    obj.display();
    return 0;
}