#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string st1="avinash bhai";
    string st2;
   /* //opening files using constructor and writing it
    ofstream out("sample1.txt");//write operation
    out<<st1;*/

    //opening files using constructor and reading it
    ifstream in("sample1.txt");
    in>>st2;


    return 0;
}