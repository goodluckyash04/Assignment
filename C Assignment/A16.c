//A16. Write a program to concatenate the two string without using string function
#include<stdio.h>
#include<string.h>
int concat(char s1[],char s2[]){
	printf("Enter First Name:");
	scanf("%s",s1);
	printf("Enter last Name:");
	scanf("%s",s2);
	int i,l;
	l=strlen(s1);
	for(i=0;s2[i]!='\0';i++,l++){
		s1[l]=s2[i];
	}
//	s1[l]='\0'; why this is required
	printf("Name:%s",s1);
}
int main(){
	char s1[50], s2[50];
	concat(s1,s2);
}