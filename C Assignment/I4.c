//I4.Write a program to find the Max number from the given three number using Ternary Operator//

#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("Enter Number 1: ");
	scanf("%d",&a);
	printf("Enter Number 2: ");
	scanf("%d",&b);
	printf("Enter Number 3: ");
	scanf("%d",&c);
	max = (a>b && a>b)?(a):((b>c)?(b):(c));
	printf("%d is Maximum",max);
	
}
