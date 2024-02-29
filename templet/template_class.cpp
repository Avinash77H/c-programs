#include<iostream>
using namespace std;
template<class T>
class show{
    T a,b;
    public:
    show(T p,T q){
        a=p;
        b=q;
    }
    void display(){
        cout << "value of a:" << a << " "
         << "value of b:" << b << endl;
    }
};
int main(){
    int p = 10, q = 20;
    float x = 2.23, y = 23.34;
    char m = 'D', n = 'S';

    show <float> ob(x,y);
    ob.display();
    return 0;
}