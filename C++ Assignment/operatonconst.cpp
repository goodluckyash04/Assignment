// Write a program of Addition, Subtraction, Division, Multiplication using constructor.
#include<iostream>
using namespace std;
double a, b;
class Operation{
   
    public:
    Operation(){
    cout<<"Enter First Number: ";
    cin>>a;
    cout<<"Enter Second Number: ";
    cin>>b;
        cout<<"Sum:"<<a+b<<endl;
        cout<<"Subtraction:"<<a-b<<endl;
        cout<<"Division:"<<a/b<<endl;
        cout<<"Multiplication:"<<a+b<<endl;
    }
};
int main(){
    
    Operation a1;
}