#include<iostream>
using namespace std;

    template <typename X> 
    X swapNum(X& n1,X& n2){  
           X temp; 
           temp = n1;
            n1 = n2;
            n2 = temp;
            return 0;
    }
int main(){
    int a=2, b=23;
    cout<<"Original a is: "<<a<<"\nb is: "<<b;
    swapNum(a,b);
    cout<<"\nNew a is: "<<a<<"\nb is: "<<b;
}