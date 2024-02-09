// this program calculate total and percentage based 
// on enter  student mark

#include<iostream>
using namespace std;
int main()
{
    int sub1,sub2,sub3,sum;
    float percentage;
    cout<<"enter marks of subject 1:";
    cin>>sub1;
    cout<<"enter marks of subject 2:";
    cin>>sub2;
    cout<<"enter marks of subject 3:";
    cin>>sub3;

    sum=sub1+sub2+sub3;
    percentage=sum/3;
    cout<<"sum is:"<<sum<<endl;
    cout<<"percentage is:"<< percentage<<"%"<<endl;




    return 0;
}