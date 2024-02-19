#include<iostream>
using namespace std;
void convert(int n){
    int rupees=70*n;
    cout<<"converted rupees is:"<<rupees<<endl;
}
void convert (float feet){
    float inch=feet*12;
    cout<<"converted inch is:"<<inch<<endl;
}
void convert (double celsius){
   double fehrenheit=celsius*1.8+32;
    cout<<"converted fehrenheit is:"<<fehrenheit<<endl;
}
int main(){
    convert(10);
    convert(1.1f);
    convert(3.0);

    return 0;
}