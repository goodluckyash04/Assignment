/*B6. Write a program to find the simple Interest.*/

#include <stdio.h>

int main()
{
	int n;
	float si,p,r;

	printf("Enter Principle amount :");
	scanf("%f",&p);
	printf("Enter rate of intrest :");
	scanf("%f",&r);
	printf("Enter Duration :");
	scanf("%d",&n);
	si =(p*r*n)/100;
	printf("Simple Intrest for years is %f",si);
	return 0;
}

