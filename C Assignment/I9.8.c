//Write a program to find out the max from given number.

#include<stdio.h>
int main()
{
	int a,i,mx;
	
	for(i=1;i<=4;i++){		
	printf("Enter The Number %d:",i);
	scanf("%d",&a);
	if(mx<a){     //mx value will be the last true value of a
    mx=a;
     }
}
    printf("max number is =%d",mx);
}
