#include<iostream>
using namespace std;
class employee
{
    private:
    int a,b,c;
    
    public:
    int d,e;
    void setData(int a1,int b1,int c1);
    void getData()
    {
        
        cout<<"value of d:"<<d<<endl;
        cout<<"value of e:"<<e<<endl;
    }
};
void employee :: setData(int a1,int b1,int c1)
{
    a=a1;
    b=b1;
    c=c1;
    cout<<"value of a:"<<a<<endl;
        cout<<"value of b:"<<b<<endl;
        cout<<"value of c:"<<c<<endl;
}
int main()
{   employee avi;
    avi.d=4;
    avi.e=5;
    
    avi.getData();
    avi.setData(1,2,3);

    return 0;
}