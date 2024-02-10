#include <iostream>
using namespace std;

class complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumrealcomplex(complex, complex);
    int sumcomcomplex(complex, complex);
};

class complex
{
    int a, b;
    // individually declaring function as friends
    // friend int calculator ::sumrealcomplex(complex o1, complex o2);
    // friend int calculator ::sumcomcomplex(complex o1, complex o2);
    //other way: Declaring the entire  calculator class as friend
    friend class calculator;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
};
int calculator::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::sumcomcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setnumber(1, 4);
    o2.setnumber(5, 7);
    calculator calc;
    int result = calc.sumrealcomplex(o1, o2);
    cout << "the sum of real part of o1 and o2 is: " << result << endl;
    int res = calc.sumcomcomplex(o1, o2);
    cout << "the sum of com part of o1 and o2 is: " << res<< endl;
    return 0;
}