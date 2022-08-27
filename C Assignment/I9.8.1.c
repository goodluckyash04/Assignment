//Write a program to find out the max from given number (E.g. No: 1562 Max number is 6 )
#include<stdio.h>
int main()
{
		int n,i,a,mx;
	printf("Enter Any Nnumber:");
	scanf("%d",&n);
	while(n>0){
	a=n%10;
	n=n/10;
	if(mx<a){     //mx value will be the last true value of a
    mx=a;
     }

	
}
    printf("max number is =%d",mx);
}