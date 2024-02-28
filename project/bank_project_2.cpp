#include<iostream>
using namespace std;
class bank{
    public:
    string name = "avinash";

        int balance = 5000;
        int choise;
        int withdrowl;
        int diposit;

        cout << "employee name :" << name << '\t' << "balance :" << balance << endl;
        cout << "1.withdraw" << endl;
        cout << "2.diposit" << endl;
        cout << "3.check balance" << endl;
        cout << "4.exit" << endl;

        for (int i = 1; i < 10; i++)
        {
            cout << "enter your choise:";
            std::cin >> choise;
            switch (choise)
            {
            case 1:

                cout << "enter withdrowl amount:";
                std::cin >> withdrowl;
                balance = balance - withdrowl;
                break;
            case 2:
                cout << "enter diposit amount:";
                std::cin >> diposit;
                balance = balance + diposit;
                break;
            case 3:
                cout << "your balance is:" << balance << endl;
                break;
            case 4:
                cout << "thank you for bank visit";
                exit(0);
            }
        }
    }
};
int main(){
    int input;
    cout << "enter account number:";
    std::cin >> input;
    return 0;
}