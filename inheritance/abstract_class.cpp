#include<iostream>
using namespace std;
class base{
    public:
      virtual void show()=0;
    void display(){
        cout<<"hy , i am base class";
    }
};
class derived:public base{
    int a=77;
    public:
     void show(){
        cout<<"value of a is:"<<a<<endl;
    }
};
int main(){
    base *ptr;
    derived obj;
     ptr=&obj;
     ptr->show();
    //ptr->display();
    return 0;
}