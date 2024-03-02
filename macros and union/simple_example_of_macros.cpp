#include<iostream>
#define pi 3.14
#define square(r) ((r)*(r))
using namespace std;
int main(){
    int r=100;
    double area;
    area=pi*square(r);
    cout<<"area of circle is:"<<area<<endl;
    return 0;
}