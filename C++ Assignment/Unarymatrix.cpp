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
    int operator+(){
        int sum[20];
      for(int i=0;i<n;i++){
        sum[i]=2*a[i];
      }
        cout<<"Addition of Matrix is:"<<endl;
        for(int i=0;i<n;i++){
            cout<<sum[i]<<"\t";
        }
    } 
};
int main(){
    Matrix m1;
    +m1;
}
