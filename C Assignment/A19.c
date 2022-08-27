//A19. Write a program to find out the factorial of given number using function
#include<stdio.h>
/*int factorial(int number){
	if(number>1){
		return number*factorial(number-1);
		}
}*/
int factorial(int number){
	int i,a=1;
	for(i=number;i>1;i--){      //or for(i=1;i<=number;i++){
		a=a*i;                 //           a=a*i;    
	}
 printf("Factorial of %d is %d",number,a);
}

int main(){
	int a;
	printf("Enter any Number:");
	scanf("%d",&a);
	factorial(a);
//	printf("Factorial of %d is %d",a,factorial(a));
}