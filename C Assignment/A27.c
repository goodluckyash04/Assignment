/*A27. Write a program of structure for five employee that provides the following information
-print and display empno,empname,address and age*/

#include<stdio.h>
#include<string.h>

struct empdetail
{
	int empno;
	char empname[200];
	int age;
	char address[200];
};
struct empdetail printInfo(struct empdetail e[50]){
	int i,n;
	printf("Enter the Number of Employee:");
	scanf("%d",&n);
	for(i=0; i<n; i++){
	printf("\nEnter Employee Name:");
	scanf (" %[^\n]%*c", e[i].empname);
	printf("Enter Employee Address:");
	scanf (" %[^\n]%*c", e[i].address);
	printf("Enter Employee Number:");
	scanf("%d",&e[i].empno);
	printf("Enter Employee Age:");
	scanf("%d",&e[i].age);
}
printf("\n....Emloyee Detail....\n");
for(i=0; i<n; i++){
	printf("\nEmployee %d",e[i].empno);
	printf("\nEmployee Number :%d",e[i].empno);
	printf("\nEmployee Name   :%s",e[i].empname);
	printf("\nEmployee Age    :%d",e[i].age);
	printf("\nEmployee Address:%s\n",e[i].address);
}
}
int main(){
	struct empdetail e[50];
	printInfo(e);	
}






