// Write a program to calculate the area of circle, rectangle and triangle using Function Overloading

#include<iostream>
using namespace std;
float area(double r){
    return 3.14*r*r;
}
int area(int len,int bre){
    return len*bre;
}
float area(double base,double height){
    return 0.5*base*height;
}
int main(){
    double r,base,height;
    int len,bre;
    cout<<"Enter radius of circle:";
    cin>>r;
    cout<<"Circle Area:"<<area(r)<<endl;
    cout<<"Enter length and breadth of rectangle:";
    cin>>len>>bre;
    cout<<"Rectangel Area:"<<area(len,bre)<<endl;
    cout<<"Enter base and height of triangle:";
    cin>>base>>height;
    cout<<"Triangle Area:"<<area(base,height)<<endl;
}