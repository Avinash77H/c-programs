#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // string s1;
    // cout<<"enter string:";
    // cin>>s1;
    // ofstream x("write1.txt");
    // x<<"i am "+s1;
    // x.close();

    string s2;

    ifstream z("sample2.txt");
    getline(z,s2);
    cout<<s2;
    getline(z,s2);
    cout<<s2;

    return 0;
}