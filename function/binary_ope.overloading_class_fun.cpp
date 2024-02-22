#include <iostream>
using namespace std;
class demo
{
    int a, b;

public:
    demo (int x, int y)
    {
        a = x;
        b = y;
    }
    demo (){}

    void show()
    {
        cout << "value of a:" << a << " and "
             << "b:" << b << endl;
    }
    demo operator+(demo obj)
    {
        demo temp;
        temp.a = a + obj.a;
        temp.b = b + obj.b;
        return temp;
    }
};

int main()
{
    demo obj1(2,3), obj2(1,1), obj3;
    
    
    obj3 = obj1 + obj2; // obj1 call operator function as argument of obj2
    obj3.show();
    return 0;
}