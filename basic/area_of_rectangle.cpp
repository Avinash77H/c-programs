// this program calulate area of rectangle//
#include <iostream>
using namespace std;
int main()
{
    float height,width;
    cout << "enter value of height:";
    cin >> height;
    cout << "enter value of width:";
    cin >> width;
    float area_of_rectangle = height*width;
    cout << "area of rectangle is:" << area_of_rectangle;
    return 0;
}