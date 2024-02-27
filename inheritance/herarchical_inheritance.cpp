#include<iostream>
using namespace std;
 class base{
        public:
        int a,b;
        void addData(int x,int y){
            a=x;
            b=y;
        }
    };
    class sum:public base{
        public:
        void sumdata(){
            cout<<"sum of two number:"<<a+b<<endl;
        }
    };
    class multiply:public base{
        public:
        void multiplication(){
            cout<<"multiplication of two number:"<<a*b<<endl;
        }
        
    };
int main(){
   
       sum obj1;
        multiply obj2;
        obj1.addData(1,2);
        obj2.addData(4,5);
        obj1.sumdata();
        obj2.multiplication();
        
    
    return 0;
}