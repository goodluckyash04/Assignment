// Write a Program of Two 1D Matrix Addition using Operator Overloading 
#include<iostream>
using namespace std;
class Matrix{
    public:
    int a[20];
    int n;
        Matrix(){
             cout<<"Enter matrix element:";
             cin>>n;
            cout<<"Enter Matrix Data"<<endl;
            for(int i=0;i<n;i++){
                cout<<"Enter Element "<<i<<":";
                cin>>a[i];
            }
        }
    int operator+(Matrix x){
      int temp[n];
        for(int i=0;i<n;i++){
            temp[i]=a[i]+x.a[i];   
        } 
        cout<<"Addition of Matrix is:"<<endl;
        for(int i=0;i<n;i++){
            cout<<temp[i]<<"\t";
        }
    } 
};
int main(){
    Matrix m1,m2;
    m1+m2;
}
