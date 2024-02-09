// this program calulate area of triangle//
#include <iostream>
using namespace std;
int main()
{
    float height,base;
    cout << "enter value of height:";
    cin >> height;
    cout << "enter value of base:";
    cin >> base;
    float area_of_triangle = 0.5*height*base;
    cout << "area of triangle is:" << area_of_triangle;
    return 0;
}