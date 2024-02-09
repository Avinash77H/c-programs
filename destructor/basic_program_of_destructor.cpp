#include <iostream>
using namespace std;
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "this is a time when constructor is called for object number:"
             << count << endl;
    }
    ~num()
    {
        cout << "this is the time when my destructor is called for object number:"
             << count << endl;
        count--;
    }
};
int main()
{
    cout << "we are inside our main function" << endl;
    cout << "creating first object n1" << endl;
    num n1;// create a new object of n1 hence constructor automtically call
    // creat a block
    {
        cout << "entering this block" << endl;
        cout << "creating two more object n2 and n3" << endl;
        num n2, n3;
        cout << "exiting this block" << endl;
    }
    cout << "back to main" << endl;
    return 0;
}