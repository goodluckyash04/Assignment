/*B5. Write a program to find the Area of Triangle*/

#include <stdio.h>

int main()
{
	float b,h,area;
	
	printf("Base of Triangle :");
	scanf("%f",&b);
	printf("\nHeight of Triangle :");
	scanf("%f",&h);
	area = (b*h)/2;
	printf("\nArea of Triangle is %f",area);
	return 0;
}
