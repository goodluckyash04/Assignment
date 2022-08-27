//I8.Write a program of to find out the Area of Triangle, Rectangle and Circle using If Condition.(Must Be Menu Driven)//

#include <stdio.h>
#define pi 3.14
int main()
{
	float b,h,l,w,r,a;
	int area;
	printf("1.Triangle,\n2.Rectangle,\n3.Circle,\nFind The Area of:");
	scanf("%d",&area);
	switch(area){
		case 1:
			printf("Please enter base and height:");
			scanf("%f %f",&b, &h);
			a=(b*h)/2;
			printf("Area of Triangle is %f",a);
			break;
		case 2:
			printf("Please enter length and width:");
			scanf("%f %f",&l, &w);
			a=(l*w)*2;
			printf("Area of Rectangle is %f",a);
			break;
		case 3:
			printf("Please enter radius:");
			scanf("%f",&r);
			a=pi*r*r;
			printf("Area of Circle is %f",a);
			break;
		Default:
			printf("Invalid Command");
	}
}

