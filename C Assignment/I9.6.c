//Write a program you have to print the table of given number.

#include<stdio.h>
int main(){
	int a,b,i,n;
	printf("Write number:");
	scanf("%d",&a);
	printf("Up to:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		b=a*i;
		printf("%d * %d = %d\n",a,i,b);
	}
}