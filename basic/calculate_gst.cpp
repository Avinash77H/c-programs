 // this program claculate gst and net bill
#include<iostream>
using namespace std;
int main()
{
    float gst;
    float net;
    cout<<"rate"<<"\t";
    cout<<"qty"<<"\t";
    cout<<"amt"<<"\t";
    cout<<"dis"<<"\t";
    cout<<"amt"<<"\t";
    cout<<"gst"<<"\t";
    cout<<"net"<<"\n";

    cout<<"50"<<"\t";
    cout<<"200"<<"\t";
    cout<<"10000"<<"\t";
    cout<<"500"<<"\t";
    cout<<"9500"<<"\t";
    
    gst= (9500*18/100);

    cout<<gst<<"\t";  // gst 18%
    net=gst+9500;
    cout<<net<<"\t"; // net bill

    return 0;
}