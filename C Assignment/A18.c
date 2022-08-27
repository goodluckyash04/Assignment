//A18. Write a program to find out the Square and cube of given number using function
#include<stdio.h>
int square(int number){
	int sq=number*number;
	printf("Square of %d is %d\n",number,sq); 
}
int cube(int number){
	int cb=number*number*number;
	printf("Cube of %d is %d",number,cb); 
}
int main(){
	int a;
	printf("Enter any Number: ");
	scanf("%d",&a);
	square(a);
	cube(a);
}