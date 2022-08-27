//Write a program make a summation of given number

#include<stdio.h>  
 int main()    
{
	int n,a,sum;
	printf("Enter Any Nnumber:");
	scanf("%d",&n);
	while(n>0){
	a=n%10;
	sum=sum+a;
	n=n/10;
	}
	printf("sum = %d",sum);	
}   