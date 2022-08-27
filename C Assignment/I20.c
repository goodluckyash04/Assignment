//I20. Write a program to enter a ten elements using Array and find out the to count the total number of odd and even numbers

#include<stdio.h>
int main()
{
	int i,a[10],odd=0,even=0;
	for(i=0;i<10;i++){
		printf("Enter the element of [%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
		if(a[i]%2==0){
			even=even+1;
		}else{
			odd=odd+1;
		}
	}
printf("\ntotal odd numbers are : %d\ntotal even numbers are : %d",odd,even);
}