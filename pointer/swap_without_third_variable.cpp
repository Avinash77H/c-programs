#include<iostream>
using namespace std;
int main(){
   int a,b;
   a=10;
   b=8;
   int *ptr1=&a;
   int *ptr2=&b;
   cout<<"before swap *ptr1= "<<*ptr1<<"and *ptr2 is= "<<*ptr2<<endl;
   *ptr1=*ptr1+*ptr2;
   *ptr2=*ptr1-*ptr2;
   *ptr1=*ptr1-*ptr2;
   cout<<"after swap *ptr1= "<<*ptr1<<"and *ptr2 is= "<<*ptr2<<endl;

}