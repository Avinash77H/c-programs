#include <iostream>
using namespace std;
class student
{
private:
    int admNo;
    string sname;
    float eng, math, sci;
    float ctotal(float eng, float math, float sci);

public:
    student()
    { // this is constuctor
        cout << "-->  contruction exicute  <--" << endl;
        cout << "enter admNo :";
        cin >> admNo;
        cout << "enter sname:";
        cin >> sname;
        cout << "enter eng is:";
        cin >> eng;
        cout << "enter math is:";
        cin >> math;
        cout << "enter sci is:";
        cin >> sci;
        cout << endl;
    }
    ~student() // this is destructor
    {
        cout << "-->  distructor exicute  <--" << endl;
    }

    void showdata()
    {

        cout << "admNo is:" << admNo << endl;
        cout << "sname is:" << sname << endl;
        cout << "eng is:" << eng << endl;
        cout << "math is:" << math << endl;
        cout << "sci is:" << sci << endl;
        cout << "total is:" << ctotal(eng, math, sci)<<endl;
        
    }
};
float student ::ctotal(float eng, float math, float sci)
{
    float total = eng + math + sci;
    return total;
}
int main()
{
    student avi;
    // avi.Takedata();
    cout << "********************" << endl;
    avi.showdata();

    return 0;
}