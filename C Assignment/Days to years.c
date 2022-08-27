// WAP to convert years into days and days into years.

#include<stdio.h>
int main(){
	int days,years;
	float con1,con2;
	printf("1.Enter Years to convert:");
	scanf("%d",&years);
	printf("2.Enter Days to Convert:");
	scanf("%d",&days);
	con1=(float)years*365;
	con2=(float)days/365;
	printf("1.Total Days are %f.",con1);
	printf("2.Total Years are %f.",con2);
}

 