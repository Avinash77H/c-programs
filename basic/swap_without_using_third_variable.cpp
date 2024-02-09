// this program swap value  using without third variable //
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter value of a:";
    cin>>a;
    cout<<"enter value of b:";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"value of a:"<<a<<" and b:"<<b;
    return 0;
}