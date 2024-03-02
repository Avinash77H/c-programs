#include<iostream>
using namespace std;
union emp{
    int id;
    double salary;
    char ch;

};
int main(){
  emp e1;
  e1.id=77;
  e1.salary=7777;
  e1.ch='A';
  cout<<"id is:"<<e1.id<<endl;  
  cout<<"salary is:"<<e1.salary<<endl;  
  cout<<"ch is:"<<e1.ch<<endl;  
    return 0;
}