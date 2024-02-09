#include<iostream>
using namespace std;
class employee
{
    private:
    int c,d;
    

    public:
    int a,b;
    void detailshow(int c1,int d1);
    void print()
    {
        cout<<"value of a:"<<a<<endl;
        cout<<"value of b:"<<b<<endl;
        cout<<"value of c:"<<c<<endl;
        cout<<"value of d:"<<d<<endl;
    }
};
void employee ::detailshow(int c1,int d1)
{
    c=c1;
    d=d1;
    
}
int main()
{   
    employee detail;
    detail.a=10;
    detail.b=20;
    detail.detailshow(30,40);
    detail.print();
    return 0;
}