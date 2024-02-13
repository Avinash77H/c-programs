#include <iostream>
using namespace std;
int main()
{
    int n, m, hcf = 0;
    cout << "enter value of n:";
    cin >> n;
    cout << "enter value of m:";
    cin >> m;

    for (int i = n < m ? n : m; i >= 1; i--)
    {

        if (n % i == 0 && m % i == 0)
        {
            hcf = hcf + i;

            break;
        }
    }
    cout << "hcf is:" << hcf;

    return 0;
}