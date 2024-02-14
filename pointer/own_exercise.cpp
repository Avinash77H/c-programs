#include<iostream>
using namespace std;
int sum(int &a,int &b){
   int *ptr1=&a;
   int *ptr2=&b;
   int sum =*ptr1+*ptr2;

   return sum;

}
int main(){
   int a,b;
   cout<<"enter value of a:"<<endl;
   cin>>a;
   cout<<"enter value of b:"<<endl;
   cin>>b;
   sum(a,b);
   cout<<"sum is:"<<sum(a,b)<<endl;

   

}