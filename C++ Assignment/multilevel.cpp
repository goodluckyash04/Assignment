#include<iostream>
using namespace std;
class Students{
    public:
    int rollno;
};
class Test:public Students{
    public:
    int maths,sci;

};
class Result:public Test{
   int total;
   public:
   int marksheet(){
    cout<<"Enter Your Roll Number:";
    cin>>rollno;
    cout<<"Enter Marks in Maths:";
    cin>>maths;
    cout<<"Enter Marks in Sci:";
    cin>>sci;

    total=maths+sci;
    cout<<"\nStudent Roll No.:"<<rollno<<endl;
    cout<<"Total Marks obtained:"<<total<<endl;
   }
};

int main(){
    Result s1;
    s1.marksheet();
}