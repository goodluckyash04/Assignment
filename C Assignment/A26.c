/*A26. Write a program of structure employee that provides the following information
-print and display empno, empname,address and age*/

#include<stdio.h>

struct empdetail
{
	int empno,age;
	char empname[200],address[200];
};

int print(struct empdetail e){
	printf("Enter Employee Name:");
	scanf(" %[^\n]%*c",&e.empname);
	printf("Enter Employee Address:");
	scanf(" %[^\n]%*c",e.address);
	printf("Enter Employee Number:");
	scanf("%d",&e.empno);
	printf("Enter Employee Age:");
	scanf("%d",&e.age);
	printf("\nDisplaying information");
	printf("\nEnter Employee Number: %d",e.empno);
	printf("\nEnter Employee Name: %s",e.empname);
	printf("\nEnter Employee Age: %d",e.age);
	printf("\nEnter Employee Address: %s",e.address);
}
int main(){
	struct empdetail e;
	print(e);
}



/*In scanf “%*[^\n]%*c”

The “%*[^\n]” scans everything until a “\n”(Doesn’t scan “\n”) and discards it.
The “%*c ” tells scanf to scan a character and discard it.
Here your character is “\n”. The “%*c” discard the newline*/