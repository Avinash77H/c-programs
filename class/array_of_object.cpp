#include<iostream>
using namespace std;
class employee{
    int id;
    int salary;
    public:
    void setid(){
        salary=777;
        cout<<"enter the id of employee:"<<endl;
        cin>>id;
    }
    void getid(){
        cout<<"the id of this employee is: "<<id<<endl;
    }
};
int main(){
    // employee avinash,milan,ugam,vanraj;
    // avinash.setid();
    // avinash.getid();
    employee zcl[4]; 
    for(int i=0;i<4;i++){ // here zcl is company name
        zcl[i].getid();
    }

    return 0;
}