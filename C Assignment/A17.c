//A17. Write a program to perform addition, subtraction, multiplication and division of two numbers using Function.

#include<stdio.h>	
int add(int a,int b){
    int c=a+b;
	printf("Addition of %d and %d is %d\n",a,b,c);
}
int sub(int a,int b){
    int c=a-b;
	printf("Subtraction of %d and %d is %d\n",a,b,c);
}
int multi(int a,int b){
    int c=a*b;
	printf("multiplication of %d and %d is %d\n",a,b,c);
}
int div(int a,int b){
    float c=(float)a/(float)b;
	printf("Division of %d and %d is %f\n",a,b,c);
}
int main(){
	int n1,n2;
	printf("Enter Number 1:");
	scanf("%d",&n1);
	printf("Enter Number 2:");
	scanf("%d",&n2);
	add(n1,n2);
	sub(n1,n2);
	multi(n1,n2);
	div(n1,n2);	
}