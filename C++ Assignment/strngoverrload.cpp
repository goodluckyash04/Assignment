#include<iostream>
#include<string.h>
using namespace std;
class Concat{
  char name[100];
    public:
    int cocat(){
    cout<<"Enter Your Name:";
    cin>>name;      
    }
    Concat operator+(Concat a){
        Concat temp;
	strcat(name,a.name);
	strcpy(temp.name,name);
	return temp;
	
    }
    int disp(){
    	cout<<name;
	}
};

int main(){
    Concat a1,a2,a3;
    a1.cocat();
    a2.cocat();
    a3=a1+a2;
    a3.disp();
}


