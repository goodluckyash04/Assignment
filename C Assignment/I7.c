/*I7.Write a Program of Addition, Subtraction, Multiplication and Division using Switchcase.(Must Be Menu Driven)*/

#include<stdio.h>
int main()
{
	int n,n1,n2,math;
	printf("Enter Two Numbers :");
	scanf("%d %d",&n1, &n2);
	printf("1 for +,\n2 for -,\n3 for *,\n4 for /,\nEnter function number from above:");
	scanf("%d",&math);
	switch(math){
		case 1:
			n=n1+n2;
		printf("Addition of given number is %d",n);
		break;
		case 2:
			n=n1-n2;
		printf("Subtraction of given number is %d",n);
		break;
		case 3:
			n=n1*n2;
		printf("Multipication of given number is %d",n);
		break;
		case 4:
			n=n1/n2;
		printf("Division of given number is %d",n);
		break;
		default:
			printf("invalid Input");
	}
}
