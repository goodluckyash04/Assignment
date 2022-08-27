//I3.Write a program to find the Max number from the given three number using Nested If//

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter Number 1 :");
	scanf("%d",&a);
	printf("Enter Number 2 :");
	scanf("%d",&b);
	printf("Enter Number 3 :");
	scanf("%d",&c);
	if(a>b){
		if(a>c)
		printf("%d is Maximum",a);
		}else{
			if(b>a && b>c){
				printf("%d is Maximum",b);	
			}else{
				printf("%d is Maximum",c);
			}
		}
}
