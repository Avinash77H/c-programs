#include<iostream>
using namespace std;
template<class T>
class vector{
    public:
    T *arr;
    int size;
    vector(int x){
        size=x;
        arr= new T [size];
    }
    T dotproduct(vector &v){
        T sum=0;
        for(int i=0;i<size;i++){
            sum+=arr[i]*v.arr[i];
        }
        return sum;
    }
};
int main(){
    vector <float>v1(3);
    v1.arr[0]=1.1;
    v1.arr[1]=2.3;
    v1.arr[2]=3.2;

    vector <float>v2(3);
    v2.arr[0]=1.0;
    v2.arr[1]=1.2;
    v2.arr[2]=1.2;

    float a=v1.dotproduct(v2);
    cout<<"value of a:"<<a<<endl;
    
    
    return 0;
}