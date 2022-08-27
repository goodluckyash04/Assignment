//A10. Write a program to find out the Max number from given Matrix

#include<stdio.h>
int main()
{
	int i,j,a[2][2],temp=0;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Element [%d%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
		printf("%d\t",a[i][j]);
	}
	printf("\n");
}
for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			if(temp<a[i][j]){
			temp = a[i][j];
			}
		}
	}	
	printf("Max of the matrix is %d",temp);
}