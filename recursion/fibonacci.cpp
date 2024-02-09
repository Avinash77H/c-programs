#include<iostream>
using namespace std;
 int fibonacci(int n){
    if(n<2){
        return 1;
    }
    return fibonacci(n-2)+fibonacci(n-1);
 }
int main(){
    int a;
    cout<<"enter value of a:";
    cin>>a;
    cout<<"the term of fibonacci at position "<<a<<" is: "<<fibonacci(a);

    return 0;
}