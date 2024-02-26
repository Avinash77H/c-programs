#include<iostream>
#include<cmath>
using namespace std;
class simplecalculator{
  int a,b;
  public:
  void getsimpledata(){
    cout<<"enter value of a:"<<endl;
    cin>>a;
    cout<<"enter value of b:"<<endl;
    cin>>b;
  }
  void simplecalculatedata(){
    cout<<"value of a+b is:"<<a+b<<endl;
    cout<<"value of a-b is:"<<a-b<<endl;
    cout<<"value of a*b is:"<<a*b<<endl;
    cout<<"value of a/b is:"<<a/b<<endl;
  }
};
class scientificCalculator{
    int a,b;
  public:
  void getscientificdata(){
    cout<<"enter value of a:"<<endl;
    cin>>a;
    cout<<"enter value of b:"<<endl;
    cin>>b;
  }
  void scientificCalculatedata(){
    
    cout<<"value of sin(a) is:"<<sin(a)<<endl;
    cout<<"value of cos(b) is:"<<cos(b)<<endl;
    cout<<"value of tan(a) is:"<<tan(a)<<endl;
    cout<<"value of tan(b) is:"<<tan(b)<<endl;
  }
};
class hybrid:public simplecalculator,public scientificCalculator{

};
int main(){
    hybrid obj;
    obj.getsimpledata();
    obj.simplecalculatedata();
    obj.getscientificdata();
    obj.scientificCalculatedata();
    return 0;
}