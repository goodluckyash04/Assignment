//WAP to create simple calculator using class
#include<iostream>
//#include<math.h>
using namespace std;
class calC{
	int a,b;
	public:
		calC(){
			cout<<"Enter 1st Number:";
			cin>>a;
			// this->a=a;
			cout<<"Enter 2nd Number:";
			cin>>b;
			// this->b=b; 
		}
		int sum(){
			cout<<"Sum of the numbers is "<<a+b<<endl;
		}
		int sub(){
			cout<<"Substraction of the numbers is "<<a-b<<endl;
		}
		int multy(){
			cout<<"Multiplication of the numbers is "<<a*b<<endl;
		}
		int div(){
			if(b==0){
				return 0;
			}else{
			cout<<"Division of the numbers is "<<a/b<<endl;
			}	
		}		
};
int main(){
	calC a1;
	int choise;
	cout<<	"1.Addition\n"
			"2.Substraction\n"
			"3.Multiplication\n"
			"4.Division\n"
			"Press The required number:";
	cin >> choise;
	switch(choise){
		case 1:
			a1.sum();
			break;
		case 2:
			a1.sub();
			break;
		case 3:
			a1.multy();
			break;
		case 4:
			a1.div();
			break;	
	default:
		cout<<"Enter Valid Choise";	
	}
}