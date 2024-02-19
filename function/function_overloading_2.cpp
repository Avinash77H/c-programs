#include<iostream>
using namespace std;
void calArea(int lenght,int width){
    float rectangle=(float)lenght*width;
    cout<<"Area of Rectangle is:"<<rectangle<<endl;
}
void calArea(double height,int base){
    double triangle=height*base*1/2;
    cout<<"Area of triangle is:"<<triangle<<endl;
}
int main(){
    calArea(10,10);
    calArea(5.0,5);
    return 0;
}