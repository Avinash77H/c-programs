// this program calulate area of circle//
#include <iostream>
using namespace std;
int main()
{
    float radius;
    cout << "enter value of radius:";
    cin >> radius;
    float area_of_circle = 3.14159 * radius * radius;
    cout << "area of circle is:" << area_of_circle;
    return 0;
}