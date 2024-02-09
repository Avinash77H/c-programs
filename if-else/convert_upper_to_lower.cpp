/* this program  character convert upper to lower and 
      lower to upper case */
#include<iostream>
using namespace std;
int main()
{
    char x;
    cout<<"enter any  character:";
    cin>>x;
    if(x>64 && x<91)
    {
        cout<<"your character is:"<< char(x+32);
    }
    else if (x>96 && x<123)
    {
        cout<<"your character is:"<< char(x-32);
    }


    return 0;

}