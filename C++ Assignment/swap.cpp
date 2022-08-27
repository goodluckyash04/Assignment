// Write a program to swap the two numbers using friend function without using third variable.
#include<iostream>
using namespace std;
class A{
    int a,b;
    public:
    int display(){
    cout<<"Enter Value of A:";
    cin>>a;
     cout<<"Enter Value of B:";
    cin>>b;
    }
    friend int swap(A a1); 
};  
int swap(A a1){
    a1.a=a1.a+a1.b;
    a1.b=a1.a-a1.b;
    a1.a=a1.a-a1.b;
    cout<<"swap numbers are A:"<<a1.a<<" B: "<<a1.b;
}
int main(){
    A s1,s2;
    s1.display();
    swap(s1);
    s2.display();
    swap(s2);    
    }
