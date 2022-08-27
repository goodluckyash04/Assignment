/*B8.Write a program to calculate sum of 5 subjects & find the percentage. Subject marks entered by user.*/
#include <stdio.h>
int main()
{
	int a,b,c,d,e;
	int total;
	float per;
	
	printf("Total Marks : 100");
	printf("\nEnter Marks of Sub 1 :");
	scanf("%d",&a);
	printf("Enter Marks of Sub 2 :");
	scanf("%d",&b);
	printf("Enter Marks of Sub 3 :");
	scanf("%d",&c);
	printf("Enter Marks of Sub 4 :");
	scanf("%d",&d);
	printf("Enter Marks of Sub 5 :");
	scanf("%d",&e);
	total = a+b+c+d+e;
	per = (float)total/500 *100;
	printf("Sum of 5 Subject is %d and percentage is %f",total,per);
	return 0;
	
}
