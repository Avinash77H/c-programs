/*this program given second convert into hours:minite:second*/
#include<iostream>
using namespace std;
int main()
{
    int n,hours,minite,second;
    cout<<"enter value of second:";
    cin>>n;
    
    hours= n/3600;
    minite=(n-(hours*3600))/60;
    second=(n-(hours*3600)-(minite*60));
   
    cout<<"H:M:S - "<<hours<<":"<<minite<<":"<<second<<endl;

    

    return 0;
}