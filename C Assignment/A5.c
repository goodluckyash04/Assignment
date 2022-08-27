//A5. Write a Program of find the element of given position from the array.

#include<stdio.h>

int main()
{
	int b,i;
	int a[6]={1,2,54,12,111};
	printf("Enter index number:");
	scanf("%d",&b);
	for(i=0;i<6;i++){
	if(i==b){
		printf("Element at Index(position) %d is %d ",b,a[i]);
	}		
	}	
}