#include<iostream>
using namespace std;
/*
student -->test
student -->sport
test & sport --> result
*/
// use virtual keyword in inheritance therefor not creat imbiguity//
class student {
    protected:
    int roll_no;
    string name;
    public:
    void set_roll_no(int r){
        roll_no=r;
    }
    void set_name(string s){
        name=s;
    }
    void show_student(){
        cout<<"student name:"<<name<<endl;
        cout<<"student roll no:"<<roll_no<<endl;
    }
};
class test: virtual public student{
    protected:
    int physics;
    int chemisty;
    public:
    void set_marks(int a,int b){
        physics=a;
        chemisty=b;
    }
    void show_marks(){
        cout<<"physics marks:"<<physics<<endl;
        cout<<"chemistry marks:"<<chemisty<<endl;
    }
};
class sport:virtual public student{
    protected:
    int score;
    public:
    void set_score(int n){
        score=n;
    }
    void show_score(){
        cout<<"sport score is:"<<score<<endl;
    }
};
class result: public test,public sport{
    private:
    float total;
    float percentage;
    public:
    void show_result(){
        total=physics+chemisty+score;
        percentage=total/3;
        show_student();
        show_marks();
        show_score();
        cout<<"result is:"<<total<<endl;
        cout<<"percentage is:"<<percentage<<"%"<<endl;
    }
};
int main(){
    result avi;
    avi.set_roll_no(7);
    avi.set_name("avinash");
    avi.set_marks(99,98);
    avi.set_score(100);
    avi.show_result();
    return 0;
}