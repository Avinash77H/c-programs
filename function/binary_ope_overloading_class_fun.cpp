#include<iostream>
using namespace std;
class demo{
    int a,b;
    public:
    demo(int x,int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<"value of a:"<<a<<" and "<<"b:"<<b<<endl;
    }
    demo operator + (demo obj){
        demo temp(0,0);
        temp.a=a+obj.a;
        temp.b=b+obj.b;
        return temp;
    }
    
    
    
};


int main(){
    demo obj(10,20),obj1(3,7),obj2(0,0);
    obj2.show();
   obj2=obj+obj1;
   obj2.show();
    return 0;
}