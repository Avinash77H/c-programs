#include<iostream>
using namespace std;
class point{
    int x,y;
    public:
     point(int a,int b){
        x=a;
        y=b;
    }
    void displaypoint(){
        cout<<"the point is("<<"x: "<<x<<", y: "<<y<<")"<<endl;// x and y are private
    }
};
int main(){
    point p(3,7);
    p.displaypoint();
    point q(2,8);
    q.displaypoint();
    
    return 0;
}