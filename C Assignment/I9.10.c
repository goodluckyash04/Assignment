//Write a program you have to make a summation of first and last Digit.(E.g. 1234 ans:5)

#include<stdio.h>
int main()
{
	int n,a,sum;
	printf("Enter any number:");
	scanf("%d",&n);
	a=n%10;  //this will give me last digit
	while(n>9){
		n=n/10;  //123 - 123>9--123/10=12--12>9--12/10=1--1>9xxxxx
	}
	sum=n+a;
	printf("sum of First & Last digit : %d",sum);	
	}
	

