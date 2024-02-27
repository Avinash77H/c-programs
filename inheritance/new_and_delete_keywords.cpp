#include<iostream>
using namespace std;
int main(){
    int *p,a=10;
    p=&a;
    cout<<"value of at addresh of p:"<<*p<<endl;
    // new keyword using we allowcate dynamic memory and store variable value 
    // int *ptr=new int(40);// exmple of new keyword
    float *ptr=new float(23.23);// exmple of new keyword
    cout<<"value of at addresh of ptr:"<<*ptr<<endl;  

    int *arr=new int [3];
    arr[0]=11;
    *(arr+1)=22;
    arr[2]=33;

    cout<<"the value of arr[0] is:"<<arr[0]<<endl;
    cout<<"the value of arr[1] is:"<<arr[1]<<endl;
    cout<<"the value of arr[2] is:"<<arr[2]<<endl;

    delete arr; // delete keyword free dynamic allowcate memory
    // also write delete[] arr;
    cout<<"after delete the value  of arr[0] is:"<<arr[0]<<endl;
    cout<<"after delete the value of arr[1] is:"<<arr[1]<<endl;
    cout<<"after delete the value of arr[2] is:"<<arr[2]<<endl;


    return 0;
}