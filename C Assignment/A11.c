//A11. Write a program to convert the string from uppercase to lowercase and vice versa

#include<stdio.h>
#include<string.h>

int main()
{
	char word[50];
	int i;
	printf("Enter the Statement To be converted:");
	gets(word);
//	printf("%c",word[0]);
	for(i=0;word[i]!='\0';i++){
		if(word[i]>='A' && word[i]<='Z' ){
	     	word[i]=word[i]+32;			
		}else if(word[i]>='a' && word[i]<='z' ){
	    	word[i]=word[i]-32;
		}
	}
		printf("%s",word);		
}
