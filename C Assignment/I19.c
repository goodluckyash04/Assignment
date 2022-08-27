//I19. Write a program to enter a five elements using Array and print it on a screen.

#include<stdio.h>
int main()
{
	int i,a[5];
		
	for(i=0;i<5;i++){
		printf("Enter elements of a[%d]: ",i);
		scanf("%d",&a[i]);
		
	}	
	printf("Elements of array : (");
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	printf(")");
	 

}