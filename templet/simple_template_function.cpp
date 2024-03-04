#include <iostream>
using namespace std;
template <class T> // T is costom data type

void display(T a, T b)
{
    cout << "value of a:" << a << " "
         << "value of b:" << b << endl;
}

int main()
{

    int p = 10, q = 20;
    float x = 2.23, y = 23.34;
    char m = 'D', n = 'S';
    display(p, q);
    display(x, y);
    display(m, n);

    return 0;
}