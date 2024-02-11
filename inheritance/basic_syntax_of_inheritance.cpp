#include <iostream>
using namespace std;
class employee
{ // base class
public:
    int id;
    float salary;
    employee(int empid)
    {
        id = empid;
        salary = 34.0;
    }
    employee() {}
};
class programmer :  public employee
{
public:
    programmer(int empid)
    {
        id = empid;
    }
    int languagecode = 9;
    void getdata(){
        cout<<"id is:"<<id<<endl;
    }
};

int main()
{
    employee avinash(7), sahil(5);
    cout << avinash.salary << endl;
    cout << sahil.salary << endl;
    programmer skillf(12);
    cout << "languagecode:" << skillf.languagecode << endl;
    cout << "id is:" << skillf.id << endl;
    skillf.getdata();
    return 0;
}