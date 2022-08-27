//WAP to find number is even or odd using ternary operator 
#include<stdio.h>
int main()
{
	int a;
	printf("Enter any Number:");
	scanf("%d",&a);
	(a % 2 == 0) ?
	(printf("Number is Even")):
	(printf("Number is odd"));
}