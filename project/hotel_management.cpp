#include <iostream>
using namespace std;

class Hotel_management
{
protected:
  int manchuriun = 100;
  int bombay_bhel = 100;
  int pulav = 80;
  int buttermilk = 15;
  int cold_drink = 10;

public:
  void menu()
  {
    
    cout <<"food name with price"<<'\t'<<"press botton for order "<<endl;
    cout <<"*****************************************************"<<endl;
    cout <<"manchuriun:100      "<<'\t'<<"for order press 1      "<<endl;
    cout <<"bombay_bhel:100     "<<'\t'<<"for order press 2      "<<endl;
    cout <<"pulav:80            "<<'\t'<<"for order press 3      "<<endl;
    cout <<"buttermilk:15       "<<'\t'<<"for order press 4      "<<endl;
    cout <<"cold drink:10       "<<'\t'<<"for order press 5      "<<endl;
    cout <<"complete your order "<<'\t'<<"for press 6            "<<endl;                    
    cout<<"******************************************************"<<endl;
  }
  void take_order()
  {
    int order;
    int amount = 0;
    
    
    for (int i = 0; i <= 100; i++)
    {
      cout << "enter your order:";
      cin >> order;

      switch (order)
      {
      case 1:
        amount = amount + 100;
        break;
      case 2:
        amount = amount + 100;
        break;
      case 3:
        amount = amount + 80;
        break;
      case 4:
        amount = amount + 15;
        break;
      case 5:
        amount = amount + 10;
        break;
      case 6:
        goto start;
      }
    }
    
    start:
    cout<<"******************************************************"<<endl;
    cout << "your amount is:" << amount << endl;
    float gst = amount * 0.18;
    cout << "18% gst: " << gst<<endl;
    cout << "your total bill is:" << amount + gst<<endl;
    cout<<"******************************************************"<<endl;
  }
};
int main()
{
  string name;
  long long contact_no;
  int table_no;
  cout<<"please enter your name:";
  cin>>name;
  cout<<"please enter your contact number:";
  cin>>contact_no;
  cout<<"which table you can choose: ";
  cin>>table_no;
  cout<<"******************************************************"<<endl;
  cout<<"table no "<<table_no<<" book for mr."<<name<<endl;
  cout<<"contact no of mr."<<name<<":"<<contact_no<<endl;
  cout<<"******************************************************"<<endl;
  Hotel_management obj;
  obj.menu();
  obj.take_order();
  return 0;
}