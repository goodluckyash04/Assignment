//A15. Write a program to make string reverse and check the given string is palindrome or not without using string function
#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	int temp,i,p=0;
	printf("Enter Your Name a :");
	scanf("%s",&a);
	int l=strlen(a);
	for(i=0;i<l/2;i++){
		temp=a[i];
		a[i]=a[l-i-1];
		a[l-i-1]=temp; //it requires only half the word to swap	for ex yash= 1.hasy(0<=>3) 2.hsay(2<=>4) 
}
	printf("\nReverse of name : %s",a);
	for(i=0;i<l;i++){
		if(a[i]==a[l-i-1]){
			p++;
		}
	}
	if(p==i){
		printf("\n%s is palindrome ",a);
	}else{
		printf("\nThis string is not palindrome ",a);	
	}
}

