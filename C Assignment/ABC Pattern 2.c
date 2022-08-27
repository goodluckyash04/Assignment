//A
//A B
//A B C
//A B C D
//A B C D E
#include<stdio.h>
int main()
{
	int i,j,k;

	for(i=0;i<5;i++){
//		for(k=0;k<4-i;k++){
//			printf(" ");
//		}
		for(j=0;j<=i;j++){
			
			printf("%c ",(char)(j+65));
			}
	printf("\n");
	}
	
}