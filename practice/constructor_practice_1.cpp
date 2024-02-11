// this program calculate circle of area and circumference
#include<iostream>
using namespace std;
class circle{
    float radius;
    public:
    
    circle(){
        cout<<"--> constructor execute <--"<<endl;
        cout<<"enter radius:"<<endl;
         cin>>radius;
    }
    ~circle(){
        cout<<"--> distructor execute <--"<<endl;
    }
    void area(float radius);
    void circumference(float radius);
    void showdata(){
        area(radius);
        circumference(radius);
    }
    
   
    
};
void circle :: area(float radius){
    float formula=3.14*radius*radius;
    cout<<"area of circle is :"<< formula<<endl;
}
void circle :: circumference(float radius){
        float x=2*3.14*radius;
        cout<<"circumference is:"<<x<<endl;
    }
int main(){
    circle z;
    z.showdata();
   

    
    
    
   
    

    return 0;
}