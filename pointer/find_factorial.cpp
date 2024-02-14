#include <iostream>
using namespace std;
void factorial(int n,int *fact)
{
    int i;
    *fact=1;

    for( i=1;i<=n;i++){
        *fact=*fact*i;
    }
    
}
int main()
{
    int n;
    int fact;
    cout << "enter value of n:";
    cin >> n;
    factorial(n,&fact);
    cout << "factorial of " << n << " is " << fact << endl;

    return 0;
}