//A22.Write a program to print the string in reverse order using function
#include<stdio.h>
#include<string.h>
int reverse(char word[]){
	int len=strlen(word);
	int temp;
	for(int i=0;i<len/2;i++){
		temp=word[i];
		word[i]=word[len-i-1];
		word[len-i-1]=temp;
	}
	printf("Reverse is %s",word);
}
int main(){
	char name[500];
	printf("Enter Your name:");
	scanf("%s",name);
	reverse(name);
}
