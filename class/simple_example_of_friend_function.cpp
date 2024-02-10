#include<iostream>
using namespace std;
class y;
class x{
    friend void add(x,y);
    int data;
    public:
    void setvalue(int value){
        data=value;
    
    }
};
class y{
    friend  void add(x,y);
    int num;
    public:
    void setvalue(int value){
        num=value;
    }
};
void add(x o1,y o2){
    cout<<"summing data of x and y objects gives me: "<<o1.data+o2.num<<endl;
}
int main(){
    x a1;
    a1.setvalue(3);

    y b1;
    b1.setvalue(5);
    add(a1,b1);
    return 0;
}