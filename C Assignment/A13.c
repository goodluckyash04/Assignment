/*A13. Write a program to count the total number of word from given string without using
string function*/

#include<stdio.h>
#include<string.h>
int main()
{
	char line[100];
	int i,count=1;
	printf("Enter Your Address:");
	gets(line);
	for(i=0;line[i] !='\0';i++){
		if(line[i]==' '||line[i]=='.'||line[i]=='\n'){
		count++;
		} 
	}
	printf("Total Words in this Line are :%d",count); 
	}