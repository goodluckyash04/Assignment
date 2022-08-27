//Define a class to represent a bank account. Include the following members
#include<iostream>
using namespace std;

class Bank{
	string name,accType;
	int accNo;
	int iniBal,amt;
	public:
Bank(){
	cout<<"Please Enter Depositer Name: ";
	cin>>name;
	cout<<"Enter Acocunt Number: ";
	cin>>accNo;
	cout<<"Account Type(SB/CA): ";
	cin>>accType;
}
int assignValue(){
	cout<<"Initial Value of the acoount:";
	cin>>iniBal;
	this->iniBal=iniBal;
}
int deposite(){
	cout<<"Enter Amount to be Depoiste: ";
	cin>>amt;
	this->iniBal=this->iniBal + amt;
	cout<<"Your New Balance is "<<this->iniBal<<endl;
}
int withdraw(){
	cout<<"Enter Amount you want to Widhraw: " ;
	cin>>amt;
	if(this->iniBal >= amt){
		this->iniBal=this->iniBal - amt;
		cout<<"Your New Balance is "<<this->iniBal<<endl;
	}else{
		cout<<"Insufficiant Balance in Account"<<endl;
	}
}
int display(){
	cout<<"Hello "<<name<<endl;
	cout<<"Your Balance is "<<this->iniBal<<endl;
}
};
int main(){
loop:
	Bank acc1;
	int choise;
	acc1.assignValue();
loop_a:
	cout<<"1.Deposite\n2.Withraw\n3.Balance\n4.Cancel"<<endl;
	cin>>choise;
	switch(choise){
		case 1:
			acc1.deposite();
			goto loop_a;
		break;
		case 2:
		 	acc1.withdraw();
			goto loop_a;
		break;	
		case 3:
			acc1.display();
			goto loop_a;
		break;
		case 4:
			goto loop;
		default:
		cout<<"Enter Valid Choise";
		goto loop_a;
	}
}
