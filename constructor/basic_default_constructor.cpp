#include <iostream>
using namespace std;
class number
{
    int a;

public:
    number()
    {           // default constructor
        a = 33; // default constructor assigned default value 33
    }
    number(int num)
    { // second constructor
        a = num;
    }
    void display()
    {
        cout << "the value of number is:" << a << endl;
    }
};
int main()
{
    number x, y, z(7);
    x.display();
    y.display();
    z.display();
}