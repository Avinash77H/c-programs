#include<iostream>
using namespace std;
class demo{
    int a,b;
    public:
    void data(){
        cout<<"enter value of a:";
        cin>>a;
        cout<<"enter value of b:";
        cin>>b;
    }
    void print(){
        cout<<"a is:"<<a<<" "<<"b is:"<<b<<endl;
    }
};
int main(){
    demo x1[3];
    for(int i=0;i<3;i++){
        x1[i].data();
        
    }
    for(int i=0;i<3;i++){
        x1[i].print();
    }

    return 0;
}