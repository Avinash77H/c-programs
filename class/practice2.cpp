#include<iostream>
using namespace std;
class person{
    string name;
    int age;
    string village;
    public:
    void input(){
        cout<<"name=";
        cin>>name;
        cout<<"age=";
        cin>>age;
        cout<<"village=";
        cin>>village;

    }
    void show(){
        cout<<name<<endl;
        cout<<age<<endl;  
        cout<<village<<endl;
    }
};
 int main(){
    person avinash,milan,ugam;
    avinash.input();
    avinash.show();
    
    milan.input();
    milan.show();
    return 0;
}