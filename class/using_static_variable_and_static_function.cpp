#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter id:" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {

        cout << "the id of this empoyee is: " << id << " end this is employee number: "
             << count << endl;
    }
    static void getcount(void)/* this is static function.it's
     also called static datamember function and this function access only for 
    static varible */
    { 
        cout << "the value of count is " << count << endl;
    }
};
int employee ::count; // static variable default value is zero.
                      // count is the static data member of class employee.
int main()
{
    employee avinash, milan, ugam;

    avinash.setdata();
    avinash.getdata();
    employee::getcount();

    milan.setdata();
    milan.getdata();
    milan.getcount(); // second way for call function

    ugam.setdata();
    ugam.getdata();
    employee::getcount();

    return 0;
}