//**********
//****  ****
//***    ***
//**      **
//*        *

#include<stdio.h>
int main()
{
	int i,j,s;
	for(i=0;i<5;i++){
		for(j=0;j<=4-i;j++){
			printf("*");
		}
		for(s=i;s>0;s--){
			printf("  ");
		}
		for(j=0;j<=4-i;j++){
			printf("*");
		}
		printf("\n");
	}
}