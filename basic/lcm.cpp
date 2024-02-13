#include <iostream>
using namespace std;
int main()
{
    int n, m, lcf;
    cout << "enter value of n:";
    cin >> n;
    cout << "enter value of m:";
    cin >> m;
    for (int i = 1; i <= n * m; i++)
    {
        if (i % n == 0 && i % m == 0)
        {
            lcf = i;
            break;
        }
    }

    cout << "lcf is:" << lcf;
    return 0;
}