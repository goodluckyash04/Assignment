//A1.Write a program to enter a ten elements using Array and make a summation of the numbers and average of summation

#include<stdio.h>
int main()
{
	int i,a[10],sum=0,avg;
	for (i=0;i<10;i++){
		printf("Enter Element [%d] : ",i);
		scanf("%d",&a[i]);
	}
	for (i=0;i<10;i++){
		printf("%d ",a[i]);
	sum=sum+a[i];	
	}
	avg=sum/10;
	printf("\nSum of the Elements is %d & avg of Elements is %d",sum,avg);
}