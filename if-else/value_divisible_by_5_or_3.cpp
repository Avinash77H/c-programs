// this program find enter value is divisible by 5 and 3 or not //
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter value of a:";
    cin>>a;
    
    if(a%5==0&& a%3==0)
    {
        cout<<" value is divisible by 5 and 3";
    }
    else 
    {
        cout<<" value is not divisible by 5 and 3";
    }
    

    return 0;

}