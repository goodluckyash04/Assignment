//A23. Write a Program of Factorial using Recursive Function
#include<stdio.h>
int fact(int number){
	if(number>0){
		return number * fact(number-1);
	}else{
		return 1;
	}
}
int main(){
	int a;
	printf("Enter Number:");
	scanf("%d",&a);
	fact(a);
	printf("Factorial of %d! is %lld",a,fact(a));
}