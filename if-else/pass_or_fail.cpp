//  this program give information you are fail or pass based
//     on enter your mark 
#include<iostream>
using namespace std;
int main()
{
    int mark;
    cout<<"enter student mark between 1 to 100:";
    cin>>mark;
    if(mark>=35)
    {
        cout<<"you are pass";
    }
    else
    {
        cout<<"you are fail";
    }
    return 0;
}