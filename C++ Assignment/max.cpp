#include<iostream>
using namespace std;
class Max{
  int a,b;
  public:
  int display(){
    cout<<"Enter Number 1:";
    cin>>a;
    cout<<"Enter Number 2:";
    cin>>b;
  }  
 friend  int findMax(Max x);
};
int findMax(Max x){
    int max=(x.a>x.b)?x.a:x.b;
    cout<<"Max is: "<<max;
}
int main(){
    Max n1;
    n1.display();
    findMax(n1);
}