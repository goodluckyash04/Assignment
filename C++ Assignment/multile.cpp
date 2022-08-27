#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
};
class Student:public Person{
    int percentage;
public:
int display(){
    cout<<"Enter Your Name:";
    cin>>name;
    cout<<"Enter Your Age:";
    cin>>age;
    cout<<"Enter Percentage:";
    cin>>percentage;
    cout<<"Student name: "<<name<<"\nage: "<<age<<"\nYour Percentage: "<<percentage<<endl;
}
};
class Teacher:public Person{
    int salary;
 public:
    int display(){
    cout<<"Enter Your Name:";
    cin>>name;
    cout<<"Enter Your Age:";
    cin>>age;
    cout<<"Enter Salary:";
    cin>>salary;
    cout<<"Teacher name: "<<name<<"\nage: "<<age<<"\nYour Salary: "<<salary;
}
};

int main(){
    Student s1;
    Teacher t1; 
    s1.display();
    t1.display();
}
