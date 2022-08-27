/*B7. Write a program to convert temperature from degree centigrade to Fahrenheit.*/
#include <stdio.h>
int main()
{
	int c;
	printf("Enter Temperature in Celcious:");
	scanf("%d",&c);
	printf("Temperature is %d Fahrenheit",(c*9/5)+32);
	return 0;
	
}
