#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // // for writing
    // string st1="first time writing a file using c language";
                
    
    // ofstream out("sample1.txt");
    // out<<st1;
    // out.close();

    // for reading 
     string st2;
    ifstream in("sample2.txt");
    //in>>st2;
    // cout<<st2;// its read only one word
    getline(in,st2);
    cout<<st2;
    getline(in,st2);
    cout<<st2;

    return 0;
}