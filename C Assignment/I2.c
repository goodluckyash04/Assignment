//I2.Write a Program to check the given number is prime or not prime//

#include<stdio.h>

int main()
{
	int a,n,i,flag=0;
	printf("Enter any Number :");
	scanf("%d",&a);
	n=a/2;
	for(i=2;i<=n;i++){
	
	if ((a%i)==0){

	printf("%d is Not  Prime",a);
	flag=1;
	break;
}
}
	if (flag==0){
		printf("%d is Prime",a);
	}
}
