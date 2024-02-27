#include<iostream>
using namespace std;
class shop{
    int id;
    float price;
    public:
    void setData(int a,float b){
        id=a;
        price=b;
    }
    void showData(){
        cout<<"id is:"<<id<<endl;
        cout<<"price is:"<<price<<endl;
    }
};
int main(){
    
    // shop *ptr=new shop [3];
    // (*ptr).setData(01,2.2);
    // (*(ptr+1)).setData(02,3.9);
    // (*(ptr+2)).setData(03,5.3);

    // (*ptr).showData();
    // (*(ptr+1)).showData();
    // (*(ptr+2)).showData();

    int p;
    float q;
    shop *ptr=new shop [3];
    shop *ptrTemp= ptr;
    for(int i=0;i<3;i++){
        cout<<"enter id and price for "<<i<<" product:";
        cin>>p>>q;
        // (*ptr).setData(p,q);// or
         ptr->setData(p,q); // arrow operator 
        ptr++;
    }
     for(int i=0;i<3;i++){
        // (*ptrTemp).showData();  or
        ptrTemp->showData(); //arrow operator 
        ptrTemp++;
    }
    return 0;
}