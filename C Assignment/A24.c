//A24. Write a Program to Print a number and check the number is palindrome or not using recursive Function

#include<stdio.h>
int reverse(int number){
	int remainder;
	static int a=0;
	if(number>0){
		remainder=number%10;
		a=a*10+remainder;
		reverse(number/10);
	}else{
	    return a;
	}
}
int isPal(int num){
    if(num == reverse(num))
    {
        return 1;
    }
}
int main()
{
	int a;
	printf("Enter Number:");
	scanf("%d",&a);
//	printf("\nReverse number is :%d",reverse(a));
	
	if(isPal(a) == 1)
	{
        printf("Number %d is a palindrome",a);
    }else{
        printf("Number %d is not a palindrome number",a);
    }
    
}