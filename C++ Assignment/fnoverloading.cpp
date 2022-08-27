#include<iostream>
using namespace std;
class A{
    public:
    int num1,num2;
template <typename Y> Y add(Y num1,Y num2){
        return num1+num2;
    }
template <typename Y> Y sub(Y num1,Y num2){
        return num1-num2;
    }
template <typename Y> Y multi(Y num1,Y num2){
        return num1*num2;
    }
template <typename Y> Y div(Y num1,Y num2){
        return num1/num2;
    }
};
int main(){
   A a1;
    cout<<"Addition:"<<a1.add(10,20)<<endl;
    cout<<"Subtraction:"<<a1.sub(10,20)<<endl;
    cout<<"Multiplication:"<<a1.multi(10,20)<<endl;
    cout<<"Division:"<<a1.div(10.0,20.0)<<endl;
}