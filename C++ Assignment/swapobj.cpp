#include<iostream>
using namespace std;
class Fun{
    int a;
    public:
    Fun(){
        cout<<"Enter Number:";
        cin>>a;
    }
    friend int swap(Fun x,Fun y);

};  
int swap(Fun x,Fun y){
    x.a=x.a+y.a;
    y.a=x.a-y.a;
    x.a=x.a-y.a;
    cout<<"Swapped Numbers Are :"<<x.a<<" :"<<y.a;
}
int main(){
    Fun num1,num2;
    swap(num1,num2);
}