//A7. Write a program of two make Addition of two matrix using 2-D Array.

#include<stdio.h>
int main()
{
	int i,j,a[2][2],b[2][2];
//Matrix 1 
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		printf("a[%d%d] = ",i,j);
		scanf("%d",&a[i][j]);
		}	
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
	printf("%d ",a[i][j]);
}
		printf("\n");
}
//Matrix 2
printf("\n");
  	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		printf("b[%d%d] = ",i,j);
		scanf("%d",&b[i][j]);
		}	
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
	printf("%d ",b[i][j]);
}
		printf("\n");
}
//Result Matrix
printf("\n");
  	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		int sum = a[i][j]+b[i][j]; 
		printf("%d ",sum);
	}
	printf("\n");
}
}