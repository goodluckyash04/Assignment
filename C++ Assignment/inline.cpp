// Write a program to find the multiplication values and the cubic values using inline function
/*
inline return-type function-name(parameters)
{
    // function code
}  */
#include<iostream>
using namespace std;
inline int square(double x){
    return x*x;
}
inline int cube(double x){
    return x*x*x;    
}
int main(){
    double num;
    cout<<"Enter Number:";
    cin>>num;
    cout<<"Square of Number is "<<square(num)<<endl;
    cout<<"cube of Number is "<<cube(num); 
}