#include<iostream>
using namespace std;
int main()
{
    int n,year,month,day;
    cout<<"enter a value of days:";
    cin>>n;
    year=n/365;
    month=(n-(year*365))/30;
    day=(n-(year*365)-(month*30));
    cout<<year<<" year "<<month<<" month "<<day<<" day ";

    return 0;
}