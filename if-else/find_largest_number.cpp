// this program find largest number based  enter number by user //
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter value of a:";
    cin>>a;
    cout<<"enter value of b:";
    cin>>b;
    cout<<"enter value of c:";
    cin>>c;
    if (a>b && a>c)
    {
        cout<<"largest value is a:"<<a;
    }
    else if (b>a && b>c)
    {
        cout<<"largest value is b:"<<b;
    }
    else
    {
        cout<<"largest value is c:"<<c;
    }

    return 0;
}