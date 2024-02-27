#include<iostream>
using namespace std;
void employee1(){
    int choise;
    cout<<"employee name :avinash"<<"      "<<"balance :5000"<<endl;
    cout<<endl<<endl;
    cout<<"1.withdraw"<<endl;
    cout<<"2.diposit"<<endl;
    cout<<"3.check balance"<<endl;
    cout<<"0.exit"<<endl;
    cout<<endl<<endl;
    cout<<"enter your choise:";
    cin>>choise;
    switch (choise){
        case 001:
        withdrowl();
        break;
        case 002:
        diposit();
        break;
        case 003:
        check_balance();
        break;
        case 004:
        exit(0);
    }
    

}
void employee2(){
    cout<<"employee name :milan"<<"      "<<"balance :2000"<<endl;
    int choise;
    cout<<endl<<endl;
    cout<<"1.withdraw"<<endl;
    cout<<"2.diposit"<<endl;
    cout<<"3.check balance"<<endl;
    cout<<"0.exit"<<endl;
    cout<<endl<<endl;
    cout<<"enter your choise:";
    cin>>choise;
}
void employee3(){
    cout<<"employee name :ugam"<<"      "<<"balance :7000"<<endl;
    int choise;
    cout<<endl<<endl;
    cout<<"1.withdraw"<<endl;
    cout<<"2.diposit"<<endl;
    cout<<"3.check balance"<<endl;
    cout<<"0.exit"<<endl;
    cout<<endl<<endl;
    cout<<"enter your choise:";
    cin>>choise;
}
void employee4(){
    cout<<"employee name :hardik"<<"      "<<"balance :1000"<<endl;
    int choise;
    cout<<endl<<endl;
    cout<<"1.withdraw"<<endl;
    cout<<"2.diposit"<<endl;
    cout<<"3.check balance"<<endl;
    cout<<"0.exit"<<endl;
    cout<<endl<<endl;
    cout<<"enter your choise:";
    cin>>choise;
}
void employee5(){
    cout<<"employee name :parth"<<"      "<<"balance :4000"<<endl;
    int choise;
    cout<<endl<<endl;
    cout<<"1.withdraw"<<endl;
    cout<<"2.diposit"<<endl;
    cout<<"3.check balance"<<endl;
    cout<<"0.exit"<<endl;
    cout<<endl<<endl;
    cout<<"enter your choise:";
    cin>>choise;
}
void withdrowl(){

}
void diposit(){

}
void check_balance(){
    
}
int main(){
    int input;
    cout<<"enter account number:";
    cin>>input;
    if(input==001){
        employee1();
    }
    else if(input==002){
        employee2();
    }
     else if(input==003){
        employee3();
    }
     else if(input==004){
        employee4();
    }
     else if(input==005){
        employee5();
    }

    return 0;
}