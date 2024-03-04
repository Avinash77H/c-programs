#include<iostream>
using namespace std;
void func(int a){
    cout<<"i am 1st function i take a int type value"<<endl;
}

template<class T> 
void func(T a){
    cout<<"i am 2nd function i take templatize type value"<<endl;
}

int main(){
    func(4);// first priority same as argument and parameter datatype
    func(3.3);
    return 0;
}