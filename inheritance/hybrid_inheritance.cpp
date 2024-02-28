#include<iostream>
using namespace std;
class A{
    int n;
    public:
    void input(){
        cout<<"enter value of :";
        cin>>n;
    }
    void show(){
        cout<<"value of n is:"<<n<<endl;
    }
};
class B:virtual public A{

};
class C : virtual public A{

};
class D:public B,public C{

};
int main(){
  A obj1;
  B obj2;
  C obj3;
  D obj4;
  obj4.input();
  obj4.show();
    
    return 0;
}