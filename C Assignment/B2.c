/*B2.Write a program to make addition, Subtraction, Multiplication and Division of Two
Numbers.*/

#include <stdio.h>

int main()
{
	float a;
	float b;
	printf("insert 1st number :\n");
	scanf("%f",&a);
	printf("insert 2nd number: \n");
	scanf("%f",&b);
	printf("\nAddition of %f and %f is %f",a,b,a+b);
	printf("\nSubtraction of %f and %f is %f",a,b,a-b);
	printf("\nMultiplication of %f and %f is %f",a,b,a*b);
	printf("\nDivision of %f and %f is %f",a,b,a/b);	
	return 0;
}
