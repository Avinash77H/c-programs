#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;
    void check_binary(); // ths function is private hence its use only for
                         // class function not using main function

public:
    void read();

    void binary_convert();
    void display();
};
void binary ::read()
{
    cout << "enter a binary number:"; // enter binary code like 111001010101
    cin >> s;                         // because its a string
}
void binary::check_binary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary fomrat" << endl;
            exit(0); // where condition not follow then loop exit //
        }
    }
}
void binary ::binary_convert()
{
    check_binary(); // check binary function use in another function that why
                    // its called a nesting of member funtion
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    binary b;
    b.read();
    
    b.display();// display your binary code before convert//
    b.binary_convert();
    b.display();// display your binary code after convert //
    return 0;
}