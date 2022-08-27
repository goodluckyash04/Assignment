//A14. Write a program to copy string from one string to another string without using string function

#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
	int i;
	printf("Enter Name:");
	scanf("%s",&a);
	for(i=0;i<sizeof(a);i++){
		b[i]=a[i];
	}
	printf("Your Copy name is %s",b);
}