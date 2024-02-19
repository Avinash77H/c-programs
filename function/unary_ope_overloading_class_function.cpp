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
    void operator - (){
        a=-a;
        b=-b;
    }
    
};
int main(){
    demo obj(10,20),t(3,7);
    obj.show();
    t.show();
    -obj,-t;
    obj.show();
    t.show();

    return 0;
}