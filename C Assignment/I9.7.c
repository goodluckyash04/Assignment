//Write a program to print the number in reverse order//

#include<stdio.h>
int main()
{
	int a,i;
	printf("Enter any Number:");
	scanf("%d",&a);
	for(i=a;i>=0;i--){
		printf("%d, ",i);
	}	
}