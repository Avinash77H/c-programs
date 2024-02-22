#include<iostream>
using namespace std;
class demo{
    int a,b;
    friend void operator -(demo &obj);
    public:
    demo(int x,int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<"value of a:"<<a<<" and "<<"b:"<<b<<endl;
    }
    
    
};
void operator - (demo &obj){
        obj.a= -obj.a;
        obj.b= -obj.b;
    }
int main(){
    demo obj(10,20);
    obj.show();
   
    -obj;
    obj.show();
   

    return 0;
}