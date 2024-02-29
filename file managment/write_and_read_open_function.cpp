#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    // ofstream x;
    // x.open("sample1.txt");
    // x<<"hello everyone";
    // x.close();

    string str1;
    ifstream x;
    x.open("sample2.txt");
   
   while(x.eof()==0){
    getline(x,str1);
    cout<<str1<<endl;
   }
    x.close();
   
    
    return 0;
}