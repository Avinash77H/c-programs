#include<iostream>
using namespace std;
class base {
    int salary;
    public:
    int bonus;
    int totalamount;
    void addsalary(int rupees){
        salary=rupees;
    }
    void totalSalary(){
        totalamount=salary+bonus;
    }
};
class  derive:public base{
    public:
    void addbonus(int x){
        bonus=x;
    }
};
int main(){
    
    derive obj;
    obj.addsalary(1000);
    obj.addbonus(100);
    obj.totalSalary();
    cout<<"your salary is: "<<obj.totalamount<<endl;

    return 0;
}