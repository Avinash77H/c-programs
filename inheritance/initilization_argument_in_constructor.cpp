#include<iostream>
using namespace std;
class test{
    int a;
    int b;
    public:
    // test(int i,int j):a(i),b(i+j)
    // test(int i,int j):a(i),b(i*j)
    //test (int i,int j):a(i),b(j)
    //test(int i,int j):b(i),a(j)//its gave a error because first declare a
     test(int i,int j):a(i),b(a+j){

        cout<<"constructor execute"<<endl;
        cout<<"value of a is:"<<a<<endl;
        cout<<"value of b is:"<<b<<endl;
    }
};
int main(){
    test(2,8);
    return 0;
}