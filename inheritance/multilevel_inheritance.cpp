#include<iostream>
using namespace std;
class student{
    protected:
    int roll_number;
    string name;
    public:
    void get_roll_number(int );
    void get_name(string);
    void show_roll_number();
    
};
void student::get_roll_number(int r){
    roll_number=r;
}
void student::show_roll_number(){
    cout<<"roll no is :"<<roll_number<<endl;
}
void student:: get_name(string s){
    name=s;
}

class exam:public student{
    protected:
    float maths;
    float physics;
    public:
    void get_mark(float,float);
    void show_mark();
};
void exam::get_mark(float m1,float m2){
    maths=m1;
    physics=m2;
}
void exam::show_mark(){
    cout<<"marks of maths is: "<<maths<<endl;
    cout<<"marks of physics is: "<<physics<<endl;
   
}
class result:public exam{
  float result;
    public:
    void get_result();
    void show_result();
};
void result::get_result(){
    result= (maths+physics)/2;
}
void result:: show_result(){
    cout<<"student name is:"<<name<<endl;
    cout<<"your roll number is: "<<roll_number<<endl;
    cout<<"your physics marks is: "<<physics<<endl;
    cout<<"your maths marks is: "<<maths<<endl;
    cout<<"your result is: "<<result<<"%"<<endl;
    
}
int main(){
    result avinash;
    avinash.get_roll_number(77);
    avinash.get_name("avinash");
    avinash.get_mark(90.10,90.50);
    avinash.get_result();
    avinash.show_result();
    return 0;
}