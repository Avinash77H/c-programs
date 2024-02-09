// this program calculate simple interest//
#include <iostream>
using namespace std;
int main()
{
    float prize, rate_of_interest, time_period, simple_interest;
    cout << "enter net prize:";
    cin >> prize;
    cout << "enter rate of interest:";
    cin >> rate_of_interest;
    cout << "time period:";
    cin >> time_period;
    simple_interest = (prize * rate_of_interest * time_period) / 100;
    cout << "simple interest is:" << simple_interest;

    return 0;
}