// this program convert celsius into fehrenheit//
#include <iostream>
using namespace std;
int main()
{
    float celsius, fehrenheit;
    cout << "enter value of celsius:";
    cin >> celsius;
    fehrenheit = (celsius * 9 / 5) + 32;
    cout << "converted fehrenheit:" << fehrenheit;
    return 0;
}