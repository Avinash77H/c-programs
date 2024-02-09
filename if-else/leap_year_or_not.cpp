// this program find leap year or not //
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter value of year is a:";
    cin>>a;
    
    if(a%4==0 && (a%400==0 || a%100!=0))
    {
        cout<<" this year is leap year";
    }
    else 
    {
        cout<<"this year is not leap year";
    }
    

    return 0;

}