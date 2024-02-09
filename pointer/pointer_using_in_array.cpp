/*this program print array all element using pointer*/
#include<iostream>
using namespace std;
int main(){
      int arr[]={1,3,2,4,5};
     int *ptr=arr;
     
    
    for(int i=0;i<5;i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }
            /* another way */
    
            
        /*    for(int i=0;i<5;i++)
            {
               cout<<*(arr+i)<<endl;
            }
                                        */


    return 0;
}