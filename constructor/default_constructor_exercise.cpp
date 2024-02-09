#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(void); /*declare constructor these constuctor take no argument hence
                        it called a default constructor*/
    void printdata(){
        cout<<"value of a: "<<a<<" value of b:"<<b<<endl;
    }
};
complex :: complex(void){
    a=7;
    
    b=11;
    cout<<"this result from complex(void) fuction"<<endl;
}
int main(){
    complex detail;
    detail.printdata();
    return 0;
}