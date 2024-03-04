#include<iostream>
using namespace std;
template<class T1,class T2>
float avg(T1 a,T2 b){
    float x=(a+b)/2;
    return x;
}
int main(){
   float z= avg(9,5.9);
   cout<<"average is:"<<z<<endl;
    return 0;
}