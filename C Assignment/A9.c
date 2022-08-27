//A9. Write a program of Multiplication of two matrix using 2-D Array

#include<stdio.h>
int main()
{
	int i,j,k,a[2][2],b[2][2],result[2][2];
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
			result[i][j]=0;
			for(k=0;k<2;k++){
	   result[i][j] += a[i][k]*b[k][j];
	}
		printf("%d\t",result[i][j]);
	}
	printf("\n");
}
}