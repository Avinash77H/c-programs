#include<iostream>
using namespace std;
void swap(int *a,int *b,int *c){
    int temp;
    temp=*c;
    *c=*b;
    *b=*a;
    *a=temp;

    

}
int main(){
    int a=10,b=20,c=30;
    cout<<"before swap value of a:"<<a<<endl;
    cout<<"before swap value of b:"<<b<<endl;
    cout<<"before swap value of c:"<<c<<endl;
    swap(&a,&b,&c);
    cout<<"after swap value of a:"<<a<<endl;
    cout<<"after swap value of b:"<<b<<endl;
    cout<<"after swap value of c:"<<c<<endl;
    return 0;
}