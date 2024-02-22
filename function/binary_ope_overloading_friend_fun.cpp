#include<iostream>
using namespace std;
class demo{
    int a,b;
     friend demo sum (demo obj1,demo obj2);
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
    
    
    
};
demo sum (demo obj1,demo obj2){
    demo temp;
    temp.a=obj1.a+obj2.a;
    temp.b=obj1.b+obj2.b;
    return temp;

}

int main(){
    demo obj1(10,20),obj2(3,7),obj3;
    
   obj3=sum(obj1,obj2);
   obj3.show();
    return 0;
}