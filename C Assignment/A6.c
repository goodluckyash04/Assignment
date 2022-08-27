//A6. Write a program to print the Matrix using 2-D Array.

#include<stdio.h>
int main()
{
	int a[2][2],i,j;
	for(i=0;i<2;i++){
	  for(j=0;j<2;j++){
	    printf("Enter element (%d%d) :",i,j);
	    scanf("%d",&a[i][j]);
}

		}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		printf("%d ",a[i][j]);		
	}
	printf("\n");
}
}