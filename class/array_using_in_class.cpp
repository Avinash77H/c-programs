#include<iostream>
using namespace std;
class shop{
    int itemid[10];
    int itemprice[10];
    int counter;
    public:
    void initcounter(){
        counter=0;
    }
    void setprice();
    void displayprice();

};
 void shop ::setprice(){
    cout<<"enter id of your item no "<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"enter price of your item"<<endl;
    cin>>itemprice[counter];
    counter++;
 }
 void shop :: displayprice(){
    for(int i=0;i<counter;i++)
    {
        cout<<"the price of item with id "<<itemid[i]<<" is "<<itemprice[i]<< endl;
    }
 }
int main(){
    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();

    
    return 0;
}