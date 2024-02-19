#include<iostream>
using namespace std;
class demo{
    int a,b;
    public:
    demo (){

    }
    demo(int x,int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<"value of a:"<<a<<" and "<<"b:"<<b<<endl;
    }
    friend demo operator + (demo &obj1,demo &obj2);
    
    
};
demo operator + (demo &obj1,demo &obj2){
    demo temp;
    temp.a=obj1.a+obj2.a;
    temp.b=obj1.b+obj2.b;
    return temp;

}

int main(){
    demo obj(10,20),obj1(3,7),obj2;
    
   obj2=obj+obj1;
   obj2.show();
    return 0;
}