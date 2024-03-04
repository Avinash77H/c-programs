#include<iostream>
using namespace std;
template<class T>
void swapp(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=10,y=14;
    swapp(x,y);
    cout<<"x is:"<<x<<" end "<<"y is:"<<y<<endl;
    return 0;
}