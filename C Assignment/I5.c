//Write a program user enter the 5 subjects mark. You have to make a total and find the percentage.
//Percentage > 75 you have to print “Distinction”
//Percentage > 60 and percentage <= 75 you have to print “First class”
//Percentage >50 and percentage <= 60 you have to print “Second class” 
//Percentage > 35 and percentage <= 50 you have to print “Pass class” Otherwise print “Fail”//

#include<stdio.h>

int main()
{
	int a,b,c,d,e;
	float Total,per;
	printf("Enter marks of sub 1: ");
	scanf("%d",&a);
	printf("Enter marks of sub 2: ");
	scanf("%d",&b);
	printf("Enter marks of sub 3: ");
	scanf("%d",&c);
	printf("Enter marks of sub 4: ");
	scanf("%d",&d);
	printf("Enter marks of sub 5: ");
	scanf("%d",&e);
	Total= a+b+c+d+e;
	per = (Total/500)*100;
	if (per>35 && per<=50){
		printf("Pass class");
		}else if (per>50 && per<=60){
		printf("Second class");
		}else if (per>60 && per<=70){
		printf("First class");
		}else if (per>70 ){
		printf("Distinction");
	}else{
		printf("Fail");
	}
	
}
