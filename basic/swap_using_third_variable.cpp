// this program swap value by using third variable//
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter value of a:";
    cin>>a;
    cout<<"enter value of b:";
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"value of a:"<<a<<" and b:"<<b;
    return 0;
}