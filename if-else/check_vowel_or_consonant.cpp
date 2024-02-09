// this program check your character is vowel or consonant //
#include<iostream>
using namespace std;
int main()
{
    char x;
    cout<<"enter any uppercase character:";
    cin>>x;
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
    {
        cout<<"your character is vowel";
    }
    else
    {
        cout<<"your character is consonant";
    }


    return 0;

}