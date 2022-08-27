//*
//* *
//* * *
//* * * *
//* * * * *
//* * * *
//* * *
//* *
//*
#include <stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=9;i++){
		if(i<=5){
		for(j=1;j<=i && j<=5;j++){
		printf("* ");	
		}
	}else if(i>5){
		for(j=1;j<=10-i;j++){
			printf("* ");
		}
	}
	printf("\n");	
}
}

	