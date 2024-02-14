#include<iostream>
using namespace std;
int lenght(char *ptr){
    int count=0;
    while(*ptr!='\0'){
        ptr++;
        count++;

    }
            return count;
}

int main(){
    char str[20];
    cout<<"enter your string hear:";
    cin>>str;
    //int x=lenght(str);
   cout<<"your string lenght is:"<<lenght(str);
    
    return 0;
}