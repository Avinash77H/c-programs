#include<iostream>
#include<fstream>  // header file use file managment 
using namespace std;
int main(){


    // 3 useful classes

    // 1.fstreambase
    // 2.ifstream->derived from fstreambase
    // 3.ofstream->derived from fstreambase
    string st1="avinash bhai";
    string st2;
    //opening files using constructor and writing it
     //write operation

    // ofstream x("sample1.txt");   // hear ofstream is a class and 
    // x<<st1;                   // x is object of class ofstream

    // //opening files using constructor and reading it
    ifstream in("sample2.txt");
    //in>>st2; 
    // also write  and this way benifitial
    getline(in,st2);
    cout<<st2;


    return 0;
}